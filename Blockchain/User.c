// Core blockchain program for user functionality.
// Running program automatically starts a node on the local system.

#ifndef __USER_H
#define __USER_H

#include <limits.h>
#include <string.h>
#include "Blockchain.h"

// User structure.
typedef struct User
{
    // Number of transactions.
    unsigned int num_of_transactions;

    // Payment history
    char **payment_history;

    // User public address.
    char address;

    // User public key.
    char public_key;

    // User private key.
    char private_key;

    // Account balance.
    float balance;

    // Funds received.
    float funds_received;

    // Confirmation phrase 1.
    char phrase_1;

    // Confirmation phrase 2.
    char phrase_2;

    // Confirmation phrase 3.
    char phrase_3;

    // User structure size in bytes.
    int user_size_bytes;

} User;

// Print list of commands for menu-driven interface.
void printMenu(void)
{
    printf("new             -- create a new node on local system\n");
    printf("rm              -- remove a node from local system\n");
    printf("tack            -- attach a new node onto an existing node\n");
    printf("add             -- add information into new node\n");
    printf("delete <n>      -- delete information from the <n> node (insert address at <n>)\n");
    printf("show <n>        -- show data held in the <n> node (insert address at <n>)\n");
    printf("send <n>        -- send payment to the <n> address (insert address at <n>)\n");
    printf("get <n>         -- receive payment from the <n> address (insert address at <n>)\n");
    printf("fth             -- show full transaction id history\n");
    printf("th              -- show recent transaction id history\n");
    printf("pw              -- implement a password to protect nodes\n");
    printf("check           -- check if your password works\n");
    printf("change          -- change your current password\n");
    printf("usage           -- show whether there is an ongoing network on the local system\n");
    printf("net             -- display a net view of the current blockchain\n");
    printf("time            -- display time since network inception (time statistics)\n");
    printf("stats           -- display network statistics\n");
    printf("help            -- display list of commands\n");
    printf("?               -- display list of commands\n");
    printf("exit            -- stop program\n");
    printf("stop            -- stop program");
}

// Send a payment to <N> address.
int send(Blockchain *bc, User *sender, User *receiver);

// Receive a payment from <N> address.
int get(Blockchain *bc, User *sender, User *receiver);

// Keeps track of public ledger.
User *public_ledger(Blockchain *bc);

// Stores user transaction history.
User *private_ledger(User *user);

// Holds user password related functions.
User *pw(User *user);

// Password checker.
User *check(User *user);

// Changes the current password.
User *change(User *user);

// Shows ongoing network status (INACTIVE / ACTIVE).
Blockchain *usage(Blockchain *bc);

// Display a net view of the current blockchain.
void net(Blockchain *bc);

// Return number of transactions user has.
unsigned int total_transactions(User *user);

// Return user size in bytes.
int user_size(User *user);

// Print transaction history information.
void user_transaction_history(User *user);

// Return user address
char *user_address(User *user);

// Generate the public key.
char *public_key(User *user);

// Generate the private key.
char *private_key(User *user);

// Get the current account balance.
float get_balance(User *user);

// Get the funds received.
float get_funds_received(User *user);

// Generate a password phrase.
User *generate_phrase(User *user);

#endif
