#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void check_elf(unsigned char *e_ident);
void print_magic(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_data(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void print_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void print_entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

// Main function
int main(int argc, char **argv)
{
    int fd;
    unsigned char e_ident[EI_NIDENT];

    // Check that a file has been provided
    if (argc != 2)
    {
        printf("Usage: %s <ELF file>\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    // Open the file and check for errors
    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        exit(EXIT_FAILURE);
    }

    // Read the ELF header and check for errors
    if (read(fd, e_ident, EI_NIDENT) != EI_NIDENT)
    {
        fprintf(stderr, "Error: Cannot read ELF header\n");
        close_elf(fd);
        exit(EXIT_FAILURE);
    }

    // Check if the file is an ELF file
    check_elf(e_ident);

    // Print the ELF header information
    printf("ELF Header:\n");
    print_magic(e_ident);
    print_class(e_ident);
    print_data(e_ident);
    print_version(e_ident);
    print_osabi(e_ident);
    print_abi(e_ident);
    print_type(*(unsigned int *)&e_ident[EI_TYPE], e_ident);

    // Close the file and exit
    close_elf(fd);
    exit(EXIT_SUCCESS);
}

// Check if the file is an ELF file
void check_elf(unsigned char *e_ident)
{
    if (e_ident[EI_MAG0] != ELFMAG0 ||
        e_ident[EI_MAG1] != ELFMAG1 ||
        e_ident[EI_MAG2] != ELFMAG2 ||
        e_ident[EI_MAG3] != ELFMAG3)
    {
        fprintf(stderr, "Error: Not an ELF file\n");
        exit(EXIT_FAILURE);
    }
}

// Print the ELF magic numbers
void print_magic(unsigned char *e_ident)
{
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", e_ident[i]);
    }
    printf("\n");
}

// Print the ELF class
void print_class(unsigned char *e_ident)
{
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS])
    {
    case ELFCLASSNONE:
        printf("none\n");
        break;
    case ELFCLASS32:
        printf("ELF32\n");
        break;
    case ELFCLASS64:
        printf("ELF64\n");
        break;
    default:
        printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

// Print the ELF data encoding
void print_data(unsigned char *e_ident)
{
    printf("  Data:                              ");
    switch (e_ident[EI_DATA])
    {
    case ELFDATANONE:
        printf("none\n");
        break;
    case EL

