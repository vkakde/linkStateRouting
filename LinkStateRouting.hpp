/*@author: Vishwajeet_Kakde, Rahul Sharma
 *@desc: Program emulates networking routing algorithms within virtual routers
 *@remark: INPUT CONFIGURATION FILE MUST STRICTLY FOLLOW THE FORMAT AS SPECIFIED IN README.TXT
 */

#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string.h>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <map>
#include <vector>
#include <algorithm>
#include <malloc.h>
#include <queue> 
#include <ctype.h>
#include <windows.h>
#include <math.h>
#include <stack>
#include <list>
#include <utility>
#include <stdexcept>
#include <cstdlib>

using namespace std;

typedef map<string, pair<int, int> > type_packetPayload;              // defined types to hold the triple <network-name, link-cost, nw-cost>
typedef pair<string, pair<int, int> > type_packetPayloadElement;

// determines if given token is a numeric digit
bool isDigit(char c);