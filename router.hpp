#include "packet.hpp"

class router {
    typedef map<string, pair<int, router*> > type_routerRoutingTable;              // defined types to hold the triple <network-name, link-cost, outgoing-link>
    typedef pair<string, pair<int, router*> > type_routerRoutingTableElement;

public:
    int routerID;                             // numeric router IDs, such as 0, 1, 2 ..
    string networkName;                       // Name/IPv4-addr of the Layer 3 network that the router belongs to
    int networkCost, linkCost, tickCounter=0;
    string STATE;                             // Router state can only be STARTED or STOPPED
    
    type_routerRoutingTable routingTable;
    type_routerRoutingTable neighboringRoutersTable;
    vector<pair<string,int> > networkCostTable;    
    map<string, int> tickCounterTable;
    
    router(int routerID, string networkName, int networkCost);
    
    void fn_addEntryToRoutingTable(string networkName, int linkCost, router *r);
    
    void fn_addEntryToNeighboringRoutersTable(string networkName, int linkCost, router *r);

    void fn_checkTickCounter();
    
    void fn_initializeTickCounterTable();
    
    void fn_originatePacket();
     
    void fn_recievePacket(packet *p);
};

typedef map<int, router*> type_GlobalRoutingTable;
typedef pair<int, router*> type_GlobalRoutingReference;
