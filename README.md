![alt text](https://github.com/jzry/JPay/blob/main/Blockchain/Final%20Logo.png)

~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~

Purpose:

Connect computer networks and transaction ID's to connect buyers / sellers simulating a blockchain network.
Uses a Merkle tree to make infinite graphs keeping receipts of transactions.
Outputs a file keeping tranasction time / hex address sent from and received.

~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~

Structure:

Code is executable on any server, running 24/7 using minimal memory until server node is disconnected
either by shutting off server or disconnecting from the network using command.
For demo, you can create a fake network on the local computer to showcase the power this has over networks.

~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~

Steps:

1) Run (command prompt), show menu / settings
2) If (start) is selected, connects node to existing network (every node is connected to eachother) by making it public.
   If no other nodes are present in the blockchain, only a single node will exist. As more nodes connect to the network, the larger it gets.
3) 24/7 runtime until A) a node is disconnected B) the server goes down for some reason C) the individual shuts down node.
4) Payments are able to be sent back and forth publicly on the blockchain, with sent / receive addresses and timestamps

~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~

Goals:

- To make infrastructure as efficient as possible
- To minimize space complexity
- To make user friendly
- To make it safe
- To make it portable

~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~

Files:

- start.c = startup booter.
- user.c = user commands.
- blockchain.c = commands for blockchain / node.

~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~-~

Disclaimer:

This program is meant to replicate a block chain on a miniature scale, with the ability to keep track of payments made to and from individual nodes. This blockchain does not have the functionality of "mining" coins like the bitcoin core does, so units are prefabricated and not "mined".
