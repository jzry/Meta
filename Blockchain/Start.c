// Executable file.
#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

#include "Blockchain.h"
#include "User.h"

int main(void)
{
    char buffer[1024];
    Blockchain *bc = NULL;
    Block *block = NULL;

    printMenu();
    printf("\n");

    while (1)
    {
        printf("Enter a command ('?' for help, or 'exit' to quit).\n");
        printf("%% ");

        scanf("%s", buffer);

        // Display list of commands.
        if ((strcmp(buffer, "?") == 0) || (strcmp(buffer, "?") == 0))
        {
            printMenu();
        }

        // Create a new node on local system.
        else if (strcmp(buffer, "new") == 0)
        {
            block = createNode(bc);

            // Add the new node to the blockchain.
            tack(bc, block);
        }

        // Remove node <n> from local system.
        else if (strcmp(buffer, "rm") == 0)
        {

        }

        // Attach a new node onto an existing node
        else if (strcmp(buffer, "tack") == 0)
        {
            tack();
        }

        // Add information into new node.
        else if (strcmp(buffer, "add") == 0)
        {
            add();
        }

        // Delete information from the <n> node (insert address at <n>).
        else if (strcmp(buffer, "delete") == 0)
        {
            delete();
        }

        // show data held in the <n> node (insert address at <n>).
        else if (strcmp(buffer, "show") == 0)
        {
            show();
        }

        // Send payment to the <n> address (insert address at <n>).
        else if (strcmp(buffer, "send") == 0)
        {
            send();
        }

        // Receive payment from the <n> address (insert address at <n>).
        else if (strcmp(buffer, "get") == 0)
        {
            get();
        }

        // Show full transaction id history.
        else if (strcmp(buffer, "fth") == 0)
        {
            fth();
        }

        // Show recent transaction id history.
        else if (strcmp(buffer, "th") == 0)
        {
            th();
        }

        // Change your current password.
        else if (strcmp(buffer, "change") == 0)
        {
            change();
        }

        // Show whether there is an ongoing network on the local system.
        else if (strcmp(buffer, "usage") == 0)
        {
            usage();
        }

        // Display the current blockchain of transactions.
        else if (strcmp(buffer, "net") == 0)
        {
            net();
        }

        // Display time since network inception (time statistics).
        else if (strcmp(buffer, "time") == 0)
        {
            time();
        }

        // Display network statistics.
        else if (strcmp(buffer, "stats") == 0)
        {
            stats();
        }

        // Stop program.
        else if ((strcmp(buffer, "exit") == 0) || (strcmp(buffer, "stop") == 0))
        {
            break;
        }

        printf("\n");
    }

    return 0;
}
