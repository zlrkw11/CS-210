#include <stdio.h>

void print_IP_address(unsigned int ip_address)
{
    printf("%u.%u.%u.%u\n",
           (ip_address >> 24) & 0xFF,
           (ip_address >> 16) & 0xFF,
           (ip_address >> 8) & 0xFF,
           ip_address & 0xFF);
}

int main()
{
    unsigned int ip1 = 0xC0441901; // Example IP address in hexadecimal
    print_IP_address(ip1);         // Should print: 192.68.25.1

    return 0;
}
