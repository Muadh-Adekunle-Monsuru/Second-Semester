A topology is a way of "laying out" the network.
Topologies can either be:
- physical 
- logical
Physical topologies describe how the cables are run
Logical topologies describe how the network messages travel

Bus (can be both logical and physical)
Star(physical only)
Ring (Can be both logical and physical)
Mesh(can be both logical and physical)

Bus: Consists of a single cable that runs to every workstation, uses the least amount of cabling, but covers the shortest amount of distance.
With a logical bus topology, messages pass through the trunk, and each workstation checks to see if he message is addressed to itself. 
Advantage:
- Cheap
- Easy to install
Disadvantages:
- It is difficult to add a workstation
- If any one of the cables breaks, the entire network is disrupted. 
- It is very expensive to maintain

Star: A physical star topology branches each network device off a central device called a hub, making it easy to add a new workstation
If any workstation goes down it does not afffect the entire network
If the central device goes down the entire network is affected
Advantage:
- Cheap
- Easy to install
- Fault tolerant
Disadvantage:
- More expensive to install than bus because more cables and hubs are needed

Ring: Each computer connects to two other computers, joining them in a circle creating a unidirectional path where messages move from workstation to workstation
Each entity participating in the ring reads a message, then regenerates it and hands it to its neighbor on a different network cable.
Advantage:
- Efficient
- Easy to install

Disadvantages:
- Difficult to add new computers
- The ring topology will go down if one entity is removed from the ring

Mesh: Simplest logical topology in terms of data flow, but most complex physical design. Each device is connected to every other device
Rarely found in LAN due to its complexity, they are usually found in WAN. 
Advantage:
- most Fault tolerance
Disadvantage:
- Cost
- Management complextity

