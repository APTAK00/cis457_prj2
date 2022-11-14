#include <sys/socket.h> 
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netpacket/packet.h> 
#include <net/ethernet.h>
#include <stdio.h>
#include <netinet/ip.h>
#include <net/if.h>
#include <errno.h>
#include <sys/types.h>
#include <ifaddrs.h>
#include <arpa/inet.h>
#include <string.h>
#include <netinet/ether.h>
#include <netinet/if_ether.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

#include <sys/socket.h> 
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netpacket/packet.h> 
#include <net/ethernet.h>
#include <stdio.h>
#include <netinet/ip.h>
#include <net/if.h>
#include <errno.h>
#include <sys/types.h>
#include <ifaddrs.h>
#include <arpa/inet.h>
#include <string.h>
#include <netinet/ether.h>
#include <netinet/if_ether.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>


const char * lookup(packet){
int dest_ip; 
int code;
int prefix;
char message[24];

//extract dest ip
dest_ip = getDestIp(packet);

//look up prefix in table


if(dest_ip != prefix){
return 0;
}

//determine interface type

//find next hop IP


  return message;
}

//function to get destination ip from a packet
int getDestIp(packet){
int destIp;
//logic
return destIp;
}

//function to return unreachable messages.
const char * unreachable(int code){
if(code==0){
return "Network Unreachable";
}
if(code==1){
return "Host Unreachable";
}
}


//function to convert from decimal to binary
long toBin(num){
long bNum = 0;
long f = 1;
long rem;

while(num != 0){
rem = num % 2;
bNum = bNum + rem * f;
f = f * 10;
num = num / 2;
}
return bNum;
}

union iptolint
{
    char ip[16];
    long  n;
};

long  conv(char []);
long conv(char ipadr[])
{
    long num=0,val;
    int p=24;
    char *tok,*ptr;
    tok=strtok(ipadr,".");
    while( tok != NULL)
    {
        val=strtol(tok,&ptr,10);
        num+=  val * (long)pow(2,p);
        p=p-8;
        tok=strtok(NULL,".");
    }
    return(num);
}

bool match(const char * ip, const char * pre){
    return 0;
}

int main(){
 printf("---------Method tests---------\n");
 printf("Message 0 -> %s\n",unreachable(0));
 printf("Message 1 -> %s\n",unreachable(1));
 for(int i =0; i < 11; i++){
     printf("Decimal %d to bin -> %d\n",i,toBin(i));
 }
 printf("-----ip to decimal-----");
union iptolint ipl; 
    char ipA[] = "10.0.0.1";
    strncpy(ipl.ip,&ipA,sizeof(ipA));
    ipl.n=conv(ipl.ip);
    printf("\nEquivalent 32-bit long int of %s is :: %lu \n",ipA,ipl.n);
    
    char ipA2[] = "10.1.0.0";
    strncpy(ipl.ip,&ipA2,sizeof(ipA2));
    ipl.n=conv(ipl.ip);
    printf("\nEquivalent 32-bit long int of %s is :: %lu \n",ipA2,ipl.n);
    
 printf("-----LONG DEC TO BIN TEST-----\n");
 long input;  // at least 32 bits
    unsigned long number;
    int i;

    printf("Enter an integer: ");
    if (scanf("%ld", &input) != 1) 
        return 1;
    /* copy the bit pattern to an unsigned long */
    memcpy(&number, &input, sizeof number);
    for (i = 32; i-- > 0;) {
        if (i > 0 && (i & 7) == 0)
            putchar(' ');
        putchar('0' + (int)((number >> i) & 1));
    }
    putchar('\n');
    return 0;
 
  printf("-----EQUIVALENCE TEST-----\n");

   


}
 