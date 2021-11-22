#include <elf.h>
#include <stdio.h>
#include <string.h>

#if defined(__LP64__)
#define ElfW(type) Elf64_ ## type
#else
#define ElfW(type) Elf32_ ## type
#endif

void read_elf_header(const char* elfFile);

int main(int argc, char *argv[])
{
    if (argc != 2)
        return (-1);

    read_elf_header(argv[1]);
    return(0);
}

void read_elf_header(const char* elfFile) {
  ElfW(Ehdr) header;

  FILE* file = fopen(elfFile, "rb");
  if(file)
  {
    fread(&header, sizeof(header), 1, file);

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) == 0)
    {

    }

    fclose(file);
  }
}