[7/3/2023]

## Course Overview
- Overview of operating systems
- Design of an operating system
- Concepts of APIs
- Types of operating systems

**Four basic units of a computer system:**
	- Hardware
	- Software
	- OS 
	- User



---
[03/04/2023]
### Generations of Operating Systems
**First generation 1950s**:
	- Single stream batch processing
	- IBM701
	- Can only operate on same type of process in batches
**Second generation 1960s**:
	- Multitasking
	- Memory management
	- Multi batch processing
 **Third Generation 1970s**:
	 - Time sharing
	 - Multiprogramming
  **Fourth Generation 1980s**:
	  - GUI
	  - Singe-user applications
  
---
   
####   Functions of operating system:
   - Security
   - management of resources
			- Memory
			- File
			- Processor
			- Device
	- Networking
	- Time Management
	- Error Detecting
	- Deadlock prevention: When all processes crash, OS should prevent that happening
	- Fault tolerant: When errors exists in an application the OS should handle the error without 
	- Interrupts Handler: It is an hardware signal from  device to a CPU. It tells the CPU that the device needs attention and that the CPU should stop performing what it is doing and respond to the device. 

### Features of an operating system:
- Scalability
- Portability
- Expendability

#### Classification of OS:
- Mainframe OS
- Server OS
- Personal Computer OS
- Embedded OS: Device which are attached to other systems.
- Distributed OS: Different devices connected together and they run the same operating system


**Process**: When processors work on instruction
**Task**: What you want to do
**Job**: When submitted to the processor/ also called Program. 



User View: What the OS should do for the user
				- These types are designed for ease of use
				- Can be a single user or workstation
System View: The OS view

---
### Components of OS
- Shell
- Kernel
![mne|350](../Images/Pasted.png)
**Shell**: It is the command interpreter. Allows users to enter command and interprets it for the kernel. It also takes the kernel's output and interprets it for the user to understand. 

**Kernel:** It is the Core Component of the OS, it contains all the managers i.e, device manager, file manager process scheduler. that perform all the functions of the OS,

Components of the kernel:
- Process Scheduler
- Memory Manager
- File system manager
- Interprocess communication manager
- I/O Manager

---
General Overview of a computer system boot sequence

1. POST on the ROM runs to check the system hardware to ensure functionality
2. Stores the result in a special memory location
3. Once the POST is succeful the softwaree loaded in ROM/BIOS will begin to activate computer's disk drives
4. When the disk drive is activated it find the bootstrap loader
5. The bootstrap loader loads the operating system into memory and allows it to begin operation. 
6. It then turns the control over to the OS

What is a bootstrap loader:
It is a small program that sets up drivers that control various hardware subsystems of the computer, during a computer startup. It then hand over the control to the OS
