### Introduction to Data Processing

The singular of data is **datum**

**Data refers to the basic facts about an object and it exists in a variety of forms**.
Such as numbers or text on a piece of paper. 
A data consists of numbers, words, images, audio, videos. 
A data is meaningless until it undergoes some forms of processing. 	
Object is a thing that has a state and a behavior.


### Electronic Data Processing (EDP)
Any computer automated process that converts raw fact i,e data into an output i.e useful information. 

---
[4/4/2023]
Types of data processing systems:
- Manual data processing systems
- Electronic data processing systems

#### Electronic Data Processing Systems

The method of processing data electronically is called electronic data processing systems.

It is any computer **automated** process that converts raw facts i.e data into output i.e useful information. 

---

<mark style="background: #D2B3FFA6;">Data processing consists of activities concerned with the systematic rerecording, sorting, computing, modifying, reporting and displaying details of business transactions.
The ultimate goal of data processing is to obtain information with which to control financial and administrative aspect of the business.</mark>

A data processing system can be view as an administrative system imposed upon the physical business systems.

---

## Scope of data processing
Looking at the areas data processing covers:
- Algorithm deductions
- Data capture
- Data recording
- Data sorting
- Data verification
- Statistical reports

Basic operations of computer systems
- Input
- Processing
- Output
- Storage
- Communication

![](images/Pasted%20image%2020230411074222.png)

---
[11/04/2023]

### Basic Software
Two categories of software
- System Software: Software that a computer system needs to for it to function. It includes the Operating System. It is used to manage the resources of the system, memory, files, processor and device.  System software provides the interface in which the user uses to communicate with the hardware
	- Operating System: Most important, it manages system resources, such as available memory space in the primary and secondary memory. It is a resource allocator and manager. 
	- Utility Software
	- Language Software
	 
- Application Software:  They leverage on the system software to work
	- Proprietary: One which is purchased
	- Custom-made: 


---
### Data Capturing

They are also called input devices. All data captured are converted into bits.

Soft data entry device: scanners, ocr, omr, micr
	- OCR: Optical Character Recognition
	- OMR: Optical Mark Recognition
	- MICR: Magnetic Ink Character Recognition


## Data Storage Devices:

**Memory Hierchy**
- Secondary Storage
- Primary Storage
- Registers
- Cache

**There are two basic storage technologies**
1. Magnetic Tape
2. Magnetic Disk: Hard Drive

**5 Storage Technologies**
1. Magnetic Storage Devices
2. Optical Storage Devices
3. Flash Storage Devices/NAND Flash Memory
4. Cloud/Online Storage Devices
5. Paper Storage

**Examples of Magnetic Storage Device**
1. Floppy Disk (diskette): This is a data storage medium that is composed of a disk of thin, flexible magnetic storage medium. It is read by a floppy disk drive FDD and is mostly seen in desktop. It combine magnetic and optical technologies.
2. Hard disk drive (HDD): Commonly reffered to as hard drive. It is a permanent storage device for large amount of data. 
		Hard-disk drive and hard disk are not the same thing. The hard drive is a set of stacked 'hard disks' each of which can record data electromagnetically in concentric circles or tracks on the disk
3. Removable hard disk: Variation of hard disk that is easily removable. They provide large economical, fast and portable storage facility.
		 Two types of hard disks
							1. Internal HHDs
							2. External/Removable HHD
4. Magnetic Tape: Data is stored on flexible Mylar tape covered with magnetic oxide. Data on tapes are accessed sequentially. Cheaper and larger capacity disks caused the decline of magnetic tape
5. Floptical: Combination of floppy and optical

Factors to consider:
	1. Portability
	2. Durability
	3. Storage Capacity
	4. Access time
	5. Cost

Why companies use magnetic tape:
1. Portability
2. Store larger data than hard drives
3. Cheap
Disadvantage:
1. Slow access time
2. Non reliability

### Optical Storage
Optical storage is a mean of storing data in which data is written and read with a laser on a medium for archival purposes. 
Optical media are more durable than tape and less vulnerable to environmental condition. 
However, presently optical media are slower than typical hard drive speeds, and offer lower storage capacities. 
Digital Versatile Disk (DVD).

Flash Storage Devices: A USB flash drive It is a NAND type flash memory data storage device integrated with a USB (Universal Serial Bus) connector. They have 10 years of data retention. They are compact, faster, hold more data and more reliable for the lack of moving parts and more durable design. 

NAND flash memory is a type of non-volatile storage technology that do not require power to retain data.

---

Disks contains concentric tracks, tracks are divided into sectors. A sector is the smallest addressable unit in a disk.

A disk head reads and writes bits of data as they pass under the head. 
When a program reads a byte from the disk, the operating system locates the surface, track and sector containing that byte, and reads the entire sector into a special area in main memory called buffer.

A cylinder is the set of tracks at a given radius of a disk pack. A cylinder is the set of tracks that can be accessed without moving the disk arm

## Measuring Disk Performance:
a. **Rotational delay/Latency:** This is the time it takes to position the proper sector under the read/write head. Latency is wasted time.

b. **Throughput:** The rate at which information can be read from or written to the storage. It is expressed in terms of megabytes per second. 

c. **Seek time:** This is the amount of time between when the CPU requests a file and when the first byte of the file is sent to the CPU. 


### File Organization
[2/5/2023]
#### What is a file:
A file is a collection of data or information that has a name called filename. It's a computer resources (one of the resources managed by the OS) 

#### What is file  organization:
File organization affect the order  at which file is being accessed. It is the way files are being organized. Files must be well maintained, managed and organized. 

#### Reasons to organize files:
File organization increases productivity and accessibility.

#### Types of File Organization:
1. **Serial File Organization:** Records are not stored in a particular order. They are called serial file as they are saved on a serial storage medium. If it were stored on magnetic tapes, it would be needed to be winded forward and backwards as access can only be made in the sequence in which the records were physically stored on the tape E.g Magnetic Tape. Data can only be accessed in sequence
2. **Sequential File Organization:** Records are stored in a particular order. They are called serial files (different to serial file organization) which are arranged in descending or ascending order and data has to be retrieved in same sequence. They can be used on magnetic tapes only. Sequential was introduced due to the disadvantages of serial file organization
3. **Indexed Sequential:** An improvement over sequential. It uses the sequential and direct access method. Index is like a block record of some of the keys that can be used to locate files. Users can manipulate what and how data is stored.
4. **Direct or Random File Organization:** Arranged in any order. Each location has its own address, so one can access a record by locating its address. It allows easy access and retrieval of information

#### Types of Data File
1. **Transaction Files:** Collection of transaction records, e is a temporary holding file that stores records that normally have a limited useful lifetime e.g employees. It is temporary
2. **Master Files:** Relatively permanent. They get uploaded periodically. Collection of permanent records. e.g. Transcripts


[10/05/2023]
#### What is Data Communication
Data communication refers to the process of transmitting data / information from a source via a telecommunications system in coded forms to a destination for the purpose of
interchanging details of business transaction.

#### What is a telecommuncation system
A telecommunication system refers to a collection of compatible hardware and software required to exchange information from one location to another. 

**Components of a telecommunication system:**
- Computer
- Terminals
- Communication channels
- Communication software


#### Data Processing Techniques
- **Batch Processing:** Used to be the dominant form of data processing. Serial, sequential and offline are other names for it. Data is processed in batches. Data is gathered as a group collected and processed after the collection one at a time. It is at the end of the processing that a result/output can be accurately seen.
	Reduces the idle time of a computer
	 
- **Online Processing**: Method whereby data about a single transaction is processed immediately it is captured.  The point of entry of the data may be remote from the location at which update is made. Transaction is entered directly into the system as they take place thereby updating the master file immediately as the transactions occur. The two systems can related directly with each other

- **Real-time:** The actual time between processing and result is very minimal, the interval between inquiry and response is very little. Not all online systems are real-time. Ensure that the master fil is updated as soon as transactions are completed.
	Banking system
	Airline Reservation

- **Transaction:** automated system that performs and records the daily or routine transactions necessary to conduct a business. A transaction may include an order or payment confirmation. It entails updating of appropriate database records as soon as a transaction is captured into the computer
- **Distributed:** A distributed system allows the components of data processing system to be made available at multiple locations in a computer network. The computers, storage devices and other components may be distributed to separate locations throughout the organization for efficiency

#### Advantages of a distributed system:
- Modularity
- Better response time, data processing center is from a location close to the end user
- Ability to share data
- Greater reliability
- Lower cost

#### Disadvantages:
- Technical problem of connecting and maintaining dissimilar systems
- Sophisticated communication system which incurs additional cost
- Data integrity and security
- Requires skilled professional for system support
### Traditional File Processing System
Manual System -> File System -> DBMS
**Manual System** 
File system was an early attempt to computerize the manual systems which were prevalent in the early days of data processing. The manual system works well when their are not many items. But it breaks down when we have lots of items and we want to cross reference(search for a specific data) them. 

**Traditional File System** 
Files system was a response for the need for more efficient data management i.e creating, organizing, storing, analyzing, processing, manipulating. Rather than having everything centralized, each departments or units within an organization would have own set of file. 
For example, a university computer system that handles student's information, if the student data are to be kept independently by the units, that each students interact with, hostel, registry, clinic, busrary, student affairs, library. Each department/unit is allowed to keep student information independently in their data processing application. A time will come when multiple files containing the same records of students will exist in different units. 

This means that whenever the university is in need of any student information, the university can collect the same information in more than one file, this can result into problems lack of data integrity, lack of program data dependence, inflexibility and inability to share data among applications. 

**Data Redundancy:**
This means the presence of duplicate data in multiple data files and they can often be in difference format. These is of the result of when different departments/units are allowed to collect the same data about an object. Because it is collected and maintained in so many deparments the same data items may be repeated in different departments. 

1. Wasted storage space
2. Time is spent in updating the record

**Program data dependence:** Program-Data Dependence is the tight relationship between data stored in files and the applications  that processes the information in the files. Would also mean change in the program that processes it. 

**Difficult of Data-sharing**: It is difficult to share data in a file environment because it may be difficult to relate the data in one file with that of another within one or several departments were files are kept.

In addition, there is no control over the access to data which makes it further more difficult to retrieve the desired information. In other words a database is a collection of data organized to serve many applications efficiently by centralizing the data and minimizing redundant data. 

DBMS database management system is a software that define a database, stores the data, support query language produces report that creates a data entry screen, it is complex program that controls the organization, storage, management and retrieval of data in a database to help resolve the challenges of building data processing applications.  It acts as an interface between application programs and datafiles

A database is a collection of related file systems.  And a filesystem can contain more than one file. 

When the application program calls for a data item such as student matric number the DBMS finds the item in the database and presents it to the application program
[31/5/2023]
Components of a DBMS
- Data Definition Language
- Data Manipulation Language
- Data Dictionary


- **Data Definition Language**: It is the component of a DBMS that defines each data as it appears in the database. A DDL is the formal language used by the programmer to specify the content and structure of the database. It defines each elements as it appears in the database before the data element is translated into the form required by the application programs.
- **Data Manipulation Language:** Its a component of the DBMS that is employed by the end users and  programmers to manipulate data in the database. Most DBMS have DML that is used in conjunction with some conventional third or fourth generation languages to manipulate the data in the database. The language contains commands that permit end users to manipulate the data, extract data from the database to satisfy information request and develop applications. 
  
  SQL most prominent DML. 
- **Data Dictionary**: This is an automated or manual file that stores definitions of data elements and data characteristics such as usage, physical representation, ownership, authorization and security. Most DD can produce list and reports of data utilization



Database models are ways of organizing and manipulating data in a database. Different database models have different structures, operations, and methods to store, access, and relate data. Some of the most common database models are:

- Relational model: This model uses tables of data that are grouped and normalized based on their characteristics. Each table has columns (attributes) and rows (records) that can be linked by keys. Relational databases are easy to use, flexible, scalable, precise, and secure.

- Hierarchical model: This model uses a tree-like structure of data that has a single root node and multiple child nodes. Each node can have only one parent node, but can have many child nodes. Hierarchical databases are easy to add and delete data, relate to natural hierarchies, and support one-to-many relationships.

- Network model: This model uses a graph-like structure of data that has multiple nodes and links. Each node can have multiple parent and child nodes, and each link can have multiple records. Network databases support many-to-many relationships and allow faster searches.

- Object-oriented model: This model uses objects of data that have attributes (properties) and methods (functions). Each object can belong to a class (type) that defines its behavior and inheritance. Object-oriented databases support complex data types, encapsulation, polymorphism, and reusability.

- Document model: This model uses documents of data that are stored in a semi-structured or unstructured format. Each document can have different fields (attributes) and values (data). Document databases are flexible, scalable, schema-less, and support nested data.



### Data processing personnel
- Data processing manager
- System analyst
- Computer programmer
- Operation manager
- Database administrator 

### Tools for data processing
- Accounting software
- bank management software
- retail point of sale
- financial planning software
- medical diagnostic software
- Insurance processing system

Programming Languages:
Low Level:
- Machine Language
- Assembly Language
High Level:
- Python
- Java
- COBOL: Common Business Oriented Languages
