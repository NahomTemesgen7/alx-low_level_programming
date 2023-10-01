#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *boo);
void print_binary(unsigned long int nah);
int get_bit(unsigned long int nmb, unsigned int idx);
int set_bit(unsigned long int *nmb, unsigned int idx);
int clear_bit(unsigned long int *nmb, unsigned int idx);
unsigned int flip_bits(unsigned long int nmb, unsigned long int mnb);
int _atoi(const char *s);
int _putchar(char cnh);
int get_endianness(void);

#endif
