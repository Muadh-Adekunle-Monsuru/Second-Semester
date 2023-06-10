Course Code: CPS106 Operating System I

1. Give a simple definition of an Operating System:
	An operating system is a system software that application software communicate and utilize the hardware. It is the most important software on a device. It helps in managing and maintain resources to aid in a smooth and fully functional device.
2. Justify the need for an OS in any Computer System
	Without an operating system to run on application software would have no means of communicating with the hardware to perform their task, including the processor. Without software applications would be monopolizing computer resources. 

  3. Why do you think it is important to learn about OS, since most of us may not be writing or designing OS
	  We might not write OS but we might write user applications which would need to communicate with the OS one way or another. Without introductory understanding to OS it would be difficult to write proper, efficient and fully functional programs. Understanding of OS would also help in diagnosing issues a computer might encounter.
4. Is the term "process" and "program" synonymous?
	No, they are not synonymous. Process refers to a program in execution, process are annimate entities with heir own address space. Programs are inanimate, they haven't been dispactched yet into the processor. 
5. Explain the term Process Control Block
	It is a register that holds useful information about an active process. This information allows the processor to identify the process, and resume its execution from where it stopped. It allows the CPU to 'control' the process.  It also  holds information about the current state of the process.  
6. Identify the necessary process information maintained by the PCB
	The PCB holds the PID which is the Process ID, this helps identify the process and differentiate it from other processes. The PCB also holds the program counter which takes note of the order and number of process in the CPU. The PCB also holds the execution context, which is information about the last execution of the process before it was removed from the processor, this allows the processor to continue where it left of. PCB also holds information about pointers to parent and child processes of a process.
7. Explain the term "interrupt"
	Interrupt occurs when a processor is running a process and signal is sent for the processor the stop the current execution and respond to the signal source. Different types of interrupts are handled by the interrupt handler which would perform the appropriate response to the interrupt.  Hardware and Software interrupts. Hardware interuppts allows processor to respond to signal from hardware devices such as keyboard. While software is interrupt sent by software also called a synchronous interrupt.
8. Mention two fundamental services provided by the OS to the users. 
	Interactivity: this allows users to interact with the application software seemlessly. The OS handles all the user inputs and interrupts which allows for interactive communication with the application. 
	Multiprogramming: OS enables a user to run multiple programs at the same time. The OS does it seemlessly enough that the user thinks both programs are running on the CPU simultaneously. 

9. Explain the core components of an OS
	An operating system is made up of the shell and the kernel. They kernel is the core components of the operating system. The kernel is what contains the different managers of an operating system. Such as the file manager, processor manager, memory manager and device manager. It also contains the interprocess Communication manager. 

10. Identify four components of a computer system in the context of this course. 
	- File
	- Memory
	- Device
	- Processor
11. In the context of computer science and operating system, explain the term process;
	A process is a program in execution. It is an animate object with its own address space which contains the stack, text and data section. A process is a program that is running on a processor. A process can be created, destroyed, suspended, dispatched, blocked and ready. A process can be made up  of  threads.

12. Briefly describe various state that a process can be in
	1. New: it is when a process is first created and admitted into the system
	2. Ready: When a process is ready to be executed and would run on a processor if one becomes available. 
	3. Running: Once a processor is available it would be dispatched and the processor now works on the specific process.
	4. Waiting/Blocked: If a process is waiting for an event to occur it is said to be in the blocked state. 
	5. Terminated: A processor that has completed running and no longer competing for processor is called terminated. 
13. Identify and discuss the transitions and the events that can make a process transit from one state to the other.
	1. New to Ready: New process becomes ready to compete for processor time
	2. Ready to Running: Processor becomes free and the process is dispatched to be executed.
	3. Running to Ready: The quantum time assigned to each process has expired. 
	4. Running to Block: The process is waiting for and event to occur such as an I/O event. 
	5. Running to Terminate: the process has completed running or the processor has terminated the process.
14. What are the differences and similarities between a process and a thread.
	Similarities:
		- Both process and threads can request a resource on the computer such as file
		- Both can create new child processes or threads
	Difference
		- A process is made up of multiple threads
  15. Explain the term processor scheduling
	It is the activity of a processor scheduler to organize which and for how long each process would run on a processor using a predefined strategy. Process scheduling ensures every process is executed and no process is just monopolizing the processor. It helps in increasing the throughput of the system. 

16. Describe the following scheduling algorithm:
	- Non-preemptive, first come, first serve: Processes are executed based on the order in which they arrive into  the system. It is largely fair, but it is sometime unfair to short jobs that came in later. It is usually implemented within other algorithms. It is fast in both a batch and Realtime environment.
	- Round Robin: Processes are executed as form of FCFS but every process is given a fixed time to run called the quantum time. Once the quantum time expires the process is placed at the back of the ready queue and waits till it is its turn. It is the fairest algorithm and it is preemptive.  
	- Shortest Job First: This is a non-preemptive. Processes are ordered based on their estimated run time. The processes are then executed from the shortest to the upwards. It is not good in a time sharing environment

17. Differentiate between a multilevel queue and a multilevel feedback queue. 
18. What do you understand by the following terms?
	1. Operating Systems
	2. Kernel
	3. Process
	4. Context Switch
19. Enumerate the various services rendered to the users by the OS. Describe the concept of co-operating processes and as well state reasons for allowing process co-operation
20. How does the OS prevent a process from monopolizing a processor
21. Describe the concept of co-operating processes and as well state reasons for allowing process co-operation
22. Enumerate at least three (3) events that could occur once a process is in running state. 
23. In a tabular form, enumerate the differences between:
	1. Monolithic Kernels and Microkernels
	2. Time sharing OS and Realtime OS
	3. Process and Thread
	4. Job Scheduler and CPU Scheduler
	5. Preemptive Scheduling and Non-preemptive Scheduling


