// Blockchain header file.
// Running program automatically starts a node on the local system.

#ifndef __BLOCKCHAIN_H
#define __BLOCKCHAIN_H

#include <limits.h>
#include <string.h>

#include "Blockchain.c"
#include "User.h"

#define ORIGIN_OK 1
#define ORIGIN_ERR 0

// Each block makes up the blockchain.
typedef struct Block
{
    // A reference to the parent block.
    struct Block *previous;

    // A reference to the next left block.
    struct Block *nextLeft;

    // A reference to the next right block.
    struct Block *nextRight;

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

    // Height of the block in the blockchain (origin block height is 0).
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

// We need to add a structure and function for hashing calculations.
// The program should (1) create a system for payments (2) run a node
// (3) run a decentralized math hasher by X amount of computers to keep track of a
// single version of a public ledger which is run by decentralized computers.

// Create a new node.
Node *createNode(void);

// Add a node to the network.
Blockchain *addNode(Blockchain *bc);

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
