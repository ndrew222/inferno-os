# A short C tour, aimed at reading Inferno's VM

Nine small programs. Read each one, build it, run it, then change something
and run it again. The last one is a working miniature of Inferno's virtual
machine built only from the ideas in the first eight.

    gcc 01_hello.c -o 01_hello
    ./01_hello

| File | Idea |
|------|------|
| `01_hello.c`           | a program that runs at all: `main`, `printf` |
| `02_types.c`           | types and how many bytes they occupy |
| `03_functions.c`       | functions, `void`, `return` |
| `04_arrays.c`          | arrays and indexing from 0 |
| `05_structs.c`         | structs and the `.` operator |
| `06_pointers.c`        | `&` and `*` |
| `07_struct_pointers.c` | `->` |
| `08_casts.c`           | `void*` and casts |
| `09_inferno_vm.c`      | all of it, as a tiny Dis interpreter |

Then read `libinterp/xec.c` lines 13-80.
