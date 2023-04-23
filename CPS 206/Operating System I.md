[7/3/2023]

## Course Overview
- Overview of operating systems
- Design of an operating system
- Concepts of<mark style="background: #BBFABBA6;"> APIs</mark>
- Types of <mark style="background: #FFF3A3A6;">operating systems</mark>

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

---
[17/04/2023]
### Hardware & Software Concepts of an OS

Application software
Utility Software
System Software
Compilers
Application Programming Interface: API


---
### Process Concepts:

1. Submit a job to be processed

waiting/ready list/queue

**Process**: When processors work on instruction, an entity which has its own address space, ==it is  generally know as a program in execution,== it can also be called and animate object. It is a dispatchable, it is an asynchronous activity.  
	Stored in an address space consists of:
		- Text: Where the code is
		- Data: The data to be use
		- Stack: Where the instruction 

### Process States
- New state
- Ready/Waiting state
- Running
- Blocked
- Terminated
![](Process%20States%20&%20Transitions.canvas)
### Process Transition:
The movement of a process from one state to another.
1. **New to Ready:** A process is being admitted to the system.  
2. **Ready to running:** A process is being dispatched due to the availability of processor
3. **Running to Block:** A processed is being blocked waiting for an input output event to occur
4. **Blocked to Ready:** Occur when the input/output or external event has occurred, also called wake up
5. **Running to Ready**: When the time given to run has expired, also called the quantum time. 
6. Running to Terminate: Also called exit. When the process has finished its execution.

### PCB:
PCB: Process Control Block, it mains data about each process, those information include, 
- **process counter:** Is a value that determines which instruction the process will execute next.
- **Execution context:** These are the register content when the process was last running, it enables a process execution context to be restored, when the process is returned to running state.

Other information maintained in the PCB:
- Process state
- address space
- priority
- process parent
- process children
 

Read more about PCB on page 175