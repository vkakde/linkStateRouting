#include "LinkStateRouting.hpp"

class packet {
public:
    int source_RouterID;                // ID of the source router
    string source_NetworkName;          // Name of the source network
    int source_NetworkCost;             // Cost of the source network
    int sequenceNumber;                 // each packet from a router has a sequence number, incremented by 1 with each transmission
    int TTL;                            // indicates number of hops, init = 10
    
    type_packetPayload payLoad;
    
    public:
    packet();
    
    packet(int sequenceNumber);

    packet(int routerID, string networkName, int networkCost);
};
