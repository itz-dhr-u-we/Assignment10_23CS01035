#include <stdio.h>

typedef struct ctrl_msg
{
    int opcode;
    int statuscode;
} control;

typedef union Packet
{
    control ctrlmsg;
    char payload[1000];
} packet;

typedef struct DataPacket
{
    int flag;
    packet p1;
} datapacket;

int main()
{
    datapacket d1[15];
    for (int i = 0; i < 15; i++)
    {
        printf("Enter choice :\n");
        printf("1.Control Message\n");
        printf("2.Payload\n");
        scanf("%d", &d1[i].flag);
        switch (d1[i].flag)
        {
        case 1:
            printf("Enter the opcode :");
            scanf("%d", &d1[i].p1.ctrlmsg.opcode);
            printf("Enter the statuscode :");
            scanf("%d", &d1[i].p1.ctrlmsg.statuscode);

            printf("opcode : %d\n", d1[i].p1.ctrlmsg.opcode);
            printf("Status code : %d\n", d1[i].p1.ctrlmsg.statuscode);
            break;
        case 2:
            printf("Enter the payload :");
            gets(d1[i].p1.payload);
            printf("Payload : ");
            puts(d1[i].p1.payload);
            break;

        default:
            printf("Invalid choice.\n");
            break;
        }
    }

    return 0;
}