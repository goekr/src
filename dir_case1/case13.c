/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: 
 * Options:   (none)
 * Seed:      244989519
 */

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2[9][7] = {{5L,0L,5L,0xA5FEF9D7L,0L,9L,9L},{0L,0x4182BD7BL,(-1L),0x4182BD7BL,0L,(-1L),0x1BF2B299L},{0x1BF2B299L,9L,0xA5FEF9D7L,0x1BF2B299L,0xA5FEF9D7L,9L,0x1BF2B299L},{5L,0x1BF2B299L,9L,0xA5FEF9D7L,0x1BF2B299L,0xA5FEF9D7L,9L},{0x1BF2B299L,0x1BF2B299L,(-1L),0L,0x4182BD7BL,(-1L),0x4182BD7BL},{0L,9L,9L,0L,0xA5FEF9D7L,5L,0L},{5L,0x4182BD7BL,0xA5FEF9D7L,0xA5FEF9D7L,0xA5FEF9D7L,0xC7C8A6B9L,(-1L)},{0xA5FEF9D7L,9L,0x1BF2B299L,5L,5L,0x1BF2B299L,9L},{0xA5FEF9D7L,(-1L),0xC7C8A6B9L,0xA5FEF9D7L,7L,7L,0xA5FEF9D7L}};


/* --- FORWARD DECLARATIONS --- */
static const uint16_t  func_1(void);


/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_2
 */
static const uint16_t  func_1(void)
{ /* block id: 0 */
    for (g_2[7][1] = 0; (g_2[7][1] > 3); ++g_2[7][1])
    { /* block id: 3 */
        return g_2[0][3];
    }
    return g_2[7][1];
}




/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int i, j;
	struct timeval start, end, result;
	FILE *fp = fopen("etime.txt","a");
    int print_hash_value = 0;
	gettimeofday(&start,NULL);
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_2[i][j], "g_2[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
	gettimeofday(&end,NULL);
	timersub(&end,&start,&result);
	fprintf(fp,"---%ld---\n",result.tv_usec);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: -1
breakdown:
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 2
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 3
XXX times a non-volatile is write: 1
XXX times a volatile is read: 0
XXX    times read thru a pointer: 0
XXX times a volatile is write: 0
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 0
XXX percentage of non-volatile access: 100

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 0
XXX percentage an existing variable is used: 100
********************* end of statistics **********************/

