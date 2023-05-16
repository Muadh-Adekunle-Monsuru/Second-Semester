[18/04/2023]

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
<mark style="background: #FF5582A6;">NEW</mark>

Disks contains concentric tracks, tracks are divided into sectors. A sector is the smallest addressable unit in a disk.

A disk head reads and writes bits of data as they pass under the head. 
When a program reads a byte from the disk, the operating system locates the surface, track and sector containing that byte, and reads the entire sector into a special area in main memory called buffer.

A cylinder is the set of tracks at a given radius of a disk pack. A cylinder is the set of tracks that can be accessed without moving the disk arm

## Measuring Disk Performance:
a. **Rotational delay/Latency:** This is the time it takes to position the proper sector under the read/write head. Latency is wasted time.

b. **Throughput:** The rate at which information can be read from or written to the storage. It is expressed in terms of megabytes per second. 

c. **Seek time:** This is the amount of time between when the CPU requests a file and when the first byte of the file is sent to the CPU. 