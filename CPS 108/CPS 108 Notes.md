## Introductions To Computer Networking
Networking is the process of connecting two or more devices together to facilitate communication between them for the purpose of exchanging data and sharing resources. 

A network can be defined as two or more computers connected together in such a way that they can share resources.


**Advantages of networking**:
- connectivity and communication
- Data sharing
- Hardware sharing: Sharing printers
- Internet access
- Data security and management

**Disadvantages**
- Cost: hardware, software, setup.
- Hardware software management and administration cost
- Security breach 
- Corruption

---
## Network Topology

Network topology describes the physical and logical relationship of nodes in a network, its schematic arrangement of the links and nodes, or some hybrid combination
**Topology based on network size:**
- LAN: Local Area Network, it covers a small geographic area
- WAN: Wide Area Network, it covers a broad area that is any network whose communication links across, regional or national boundaries. It is the largest of most well know, such as an internet
- MAN: Metropolitan Area Network, that interconnects user with computer resources in a geographic area or region larger than that covered by a LAN but smaller than that of a WAN
- PAN: Personal Area Network

## Intranet and Internet;
Internet is a world wide system of computer networks, a network in which user at any one computer can, if they can the permission, get information from every anyother computer.  

Intranet: a private network that is contained within an enterprise

Two main types of network configuration:
- Peer-to-peer Networks
- Client/Server Networks

**Peer-to-Peer Networks:** Usually implemented in a low security environment between less than 10 computers. Each computer has the same footing. These networks are used to share documents, printers and scanners.
![](images/Pasted%20image%2020230508041703.png)
**Client/Server Networks:** A high performance computer/system acts as the central computer, which stores files and application shared on the network. This is referred to as the server. Other computers which requestes these files and applications from the server are called the client.

![](images/Pasted%20image%2020230508042009.png)

Peer-to-Peer Networks | Client/Server Networks
--- | ---
Easy to setup | Difficult to set up
Less expensive to install | More expensive to install
Time consuming to maintain softwares | Less, most maintenance is managed from the server
Low levels of security supported | High level of security supported, which are controlled from the server
Ideal for less than 10 computers | No limits
Doesnt require a server | Requires a server running a server operating system


#### Basic components of a network:
- A minimum of at least 2 computers
- Network Cables
- Network Interface cards on each computer
- A switch
- Network operating system software

---
### Network Hardware:
#### Cabling
- Twisted-pair is also called 10BaseT
- Thin Coax is also called 10Base2

10BaseT: It cannot exceed 325feet in length. Because all the cables from all the clients converge at a common point, a 10BaseT network forms a star configuration.

#### Network Interface Card
Also known as a network card.It provices the physical interface between computer and cabling. It connects the computer to the cabling, which links the computers together. Computers with a wireless connection to a network would use a wireless network card. It prepares data, sends data and controls the flow of data. It also receives and translate data into bytes for the CPU to understand

#### Repeaters
Simple devices which allow a cabling system to extend beyond its maximum allowed length, by amplifying the network  voltage.
Disadvantage:
- Since they just amplify signals they also amplify the noise, therefore a network with multiple repeaters can 'drown' out the actual signal
#### Hub and Switch
A **hub** is used to join different computers on a network, it is to direct information around the network, facilitating communication between all connected devices. 

**Types of hubs**:
- Passive Hub: Simply connect all ports together electrically and are usually not powered
- Active Hub: Use electronics to amplify and clean up the signal before it is broadcast to the other ports

A network **switch** is a networking device that connects network segments.
Switches are capable of inspecting data packets a they are received, and forwarding it to the destination.

A switch is often termed a smart hub, With switching, each connection gets "dedicated bandwidth" and can operate at full speed. In contrast, a hub shares bandwidth across multiple connections such that the activity from one PC slows down the speed of other connections.

### Bridges
They join similar topologies and are used to divide network segments, they can filter out noise.
Disadvantage:
They can't connect dissimilar network types.

### Routers:
Highly Intelligent devices that connect multiple network types and determine the best path for sending data.
They can segment large networks and can filter out noise.
Slower and more expensive than bridges.


#### Wireless Network
The term wireless network refers to two or more computers communicating using standard network rules or protocols, but without the use of cabling to connect the computers together.

A WLAN can be installed as the sole network, however it can also be used to extend an exisiting wired network to areas where wiring would be too difficult to implement. 

**Advantages of WLAN:**
- It's easier to add or remove workstations
- Easy to provide connectivity in difficult to reach areas
- Access to the network can be from anywhere within the range
- Portability of devices
- Installation cost lower than LAN
- Connect buildings without need for cabling
- Useful for environment which cabling is not feasible


**Disadvantages of WLAN;**
- As the number of computers on a network increase the date transfer rate to each computer will decrease
- Lower bandwidth of wlan makes LAN more effective
- Security is more difficult to guarantee, and requires configuration
- Wired LAN is usually required to provide a backbone to the Wireless LAN

**Wireless Network Components:**
- Require Network Interface Cards
- A PC require a wireless NIC, which contains in-built antenna
- Access Point: Similar function to the hub in a LAN, access point receives and broadcasts signals to and from the surrounding computers
- No cabling required

**Wireless Networks Configurations**
- Ad-hoc/peer-to-peer arrangment
- Local Area Network

**Ad-hoc**: Using the wireless network cards in computers, computers communicate with each other directly to form the network. The devices must remain within the range of each other.


**Disadvantages of ad-hoc configurations:**
- Wireless networks are usually slower than wired network
- Wireless Network are less reliable as signal can be affected by mediums such as wall
- Slower when a group of users are downloading large files

**Advantages of Networking for schools:**
- Speed: Fast method for sharing files
- Cost: Network version of most programs are cheaper than buying individual license copies
- Centralized Software Management: All software can be loaded on one server. Which eliminates the need to spend time and energy installing updates and tracking files on independent computers
- Resource Sharing: Resources such as printers, fax machines, modems
- Flexible Access: Student are able to access their files from any computer throughout the school
- Security: Files and programs can be blocked from being copied

**Disadvantages of Networking for schools:**
- Costs: Initial costs of setup and installation is high
- Requires Administrative time: proper maintenance requires time and expertise
- File Server Failure: When a file server goes down the entire network may come to a half


### Topology:

A topology is a way of "laying out" the network.
Topologies can either be:
- Physical 
- Logical
**Physical topology** describe how the cables are run
**Logical topology** describe how the network messages travel

#### Types of topology:
- Bus (can be both logical and physical)
- Star(physical only)
- Ring (Can be both logical and physical)
- Mesh(can be both logical and physical)

**Bus**: Consists of a single cable that runs to every workstation, uses the least amount of cabling, but covers the shortest amount of distance. With a logical bus topology, messages pass through the trunk, and each workstation checks to see if he message is addressed to itself. 
**Advantage:**
- Cheap
- Easy to install
**Disadvantages:**
- It is difficult to add a new workstation
- If any one of the cables breaks, the entire network is disrupted. 
- It is very expensive to maintain

**Star:** A physical star topology branches each network device off a central device called a hub, making it easy to add a new workstation
If any workstation goes down it does not affect the entire network
If the central device goes down the entire network is affected
**Advantage:**
- Easy to install new workstations
- Fault tolerant
**Disadvantage:**
- More expensive to install than bus because more cables and hubs are needed

**Ring:** Each computer connects to two other computers, joining them in a circle creating a unidirectional path where messages move from workstation to workstation
Each entity participating in the ring reads a message, then regenerates it and hands it to its neighbor on a different network cable.
**Advantage:**
- Efficient
- Easy to install
**Disadvantages:**
- Difficult to add new computers
- The ring topology will go down if one entity is removed from the ring

**Mesh:** Simplest logical topology in terms of data flow, but most complex physical design. Each device is connected to every other device
Rarely found in LAN due to its complexity, they are usually found in WAN. 
**Advantage:**
- most fault tolerant
**Disadvantage:**
- Cost
- Management complexity

# Cabling
### Three main types of network cables
 - coaxial
 - twisted-pair
 - fiber-optic

**What are coaxial cables**
This cable contains a conductor, insulator, braiding, and sheath. The sheath covers the braiding, braiding covers the insulation, and the insulation covers the conductor

**coaxial cable can be categorized into two types;**
- single-core coaxial cable 
- multi-core coaxial cable

---

**What are fiber optic cables**
Fiber optic uses **light** to send data. It reflects light from one endpoint to another.

**Components of a fiber optic cable**
- The core is made from the thin strands of glass or plastic that can carry data over the long distance. 
- The core is wrapped in the cladding; 
- The cladding is wrapped in the buffer, 
- The buffer is wrapped in the jacket

 **Types of fiber optic cables**:
- **Single-mode fiber:** This cable carries only a single beam of light. This is more reliable and supports much higher bandwidth and longer distances than the MMF cable.
- **Multi-mode fiber:** this cable carries multiple beams of light. Because of multiple beams, this cable carries much more data than the SMF cable

---

**Types of twisted pair cables**
 **Straight Through Cable**
	A straight through cable is a type of twisted pair cable that is used in local area networks to connect a computer to a network hub such as a router.

**What Is Crossover Cable**
	A crossover Ethernet cable is a type of Ethernet cable used to connect computing devices together directly. It is most often used to connect two devices of **the same type:** e.g. two computers (via network interface controller) or two switches to each other.

**What are crimping tools**
1. To cut the network cable of the required length from the bundle.
2. To remove the outer and inner jackets of the network cable.
3. To attach the connectors on both ends of the cable.

**A network cable testing and troubleshooting tool is used for**
- To measure the length of a segment or network cable.
- To detect loose connectors.
- To identify an un-labeled network cable from all network cables.
- To find a break in the network cable.
- To certify the cable installation.