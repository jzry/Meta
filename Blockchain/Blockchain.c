// Generates the origin block and other block functionalities.

#include <stdio.h>
#include <stdlib.h>

#include "Blockchain.h"
#include "User.h"

// Each block makes up the blockchain.
typedef struct Block
{
    // A reference to the parent block.
    struct Block *previous;

    // A reference to the next block.
    struct Block *next;

    // Block creation number.
    unsigned long long int index;

    // Parent block hash.
    char previous_hash;

    // Hash of the current block.
    char hash;

    // Timestamp of block creation.
    char timestamp;

    // Transaction amount.
    float transaction;

    // Height of the block in blockchain (origin block height is 0).
    unsigned int height;

    // Size of block in bytes.
    int block_size;

} Block;

// Blockchain buildup.
typedef struct Blockchain
{
    // Reference to the origin block.
    Block *origin_block;

    // Reference to the last block created.
    Block *last_block_inserted;

    // Amount of blocks in the blockchain.
    unsigned long long int num_of_blocks;

} Blockchain;

// Create a new node.
Node *createNode(Blockchain *b)
{
    Block *b = NULL;
    if ((n = calloc(1, sizeof(Block))) == NULL)
    {
        return NULL;
    }



    return b;
}

// Add a node to the network.
Blockchain *addNode(Blockchain *bc)
{
    if (bc == NULL)
    {
        return NULL;
    }
}

// Remove a node from the network.
Blockchain *removeNode(Block *b);

// Create the blockchain.
Blockchain *createBlockchain(void);

// Add a block to the blockchain.
Blockchain *createBlock(Blockchain *bc);

// Tack a block onto another.
Blockchain *tack(Blockchain *bc, Block *b);

// Show data held in a block.
void *show(Block *block);

// Generate block hash.
Block *generate_hash(Block *b);

#endif

/*
 User commands:
 printMenu():
 new             -- create a new node on local system
 rm              -- remove a node from local system
 tack            -- attach a new node onto an existing node
 add             -- add information into new node
 delete <n>      -- delete information from the <n> node
 show <n>        -- show data held in the <n> node

 send <n>        -- send payment to the <n> address
 get <n>         -- receive payment from the <n> address
 fth             -- show full transaction id history
 th              -- show recent transaction id history

 pw              -- implement a password to protect nodes
 check           -- check if your password works
 change          -- change your current password

 usage           -- show whether there is an ongoing network on the local system
 net             -- display a net view of the current blockchain
 time            -- display time since network inception (time statistics)
 stats           -- display network statistics

 help            -- display list of commands
 ?               -- display list of commands
 exit            -- stop program
 stop            -- stop program
 */
