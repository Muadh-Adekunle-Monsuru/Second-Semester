[17/04/2023]
1. Discuss the modes that a process can be
2. Process queue, list them and define them and what makes the content.
3. List the process operation: operations that can be preformed on process
4. Discuss Context Switching
5. Discuss interrupt and the steps operating system handle them.

1. Q1
		![](images/Pasted%20image%2020230426111356.png)
2. A process in an operating system may have to go through different types of queues or lists depending on its state and priority.
	-  the ready queue, which contains processes that are ready to run but are waiting for the CPU. 
	-  the waiting queue, which contains processes that are waiting for some event to occur, such as an input/output operation or a signal. 
	-  the terminated queue, which contains processes that have finished their execution and are waiting to be removed from the system.
	
	A ready queue is a queue that contains all the processes that are ready to run on the CPU. The processes in the ready queue are waiting for their turn to be assigned to the CPU by the scheduler. The scheduler can use different algorithms to decide which process to select from the ready queue, such as first-come first-served (FCFS), shortest job first (SJF), priority-based or round-robin.
	
	A waiting queue is a queue that contains all the processes that are waiting for some event to occur, such as an input/output (I/O) operation, a signal or a semaphore. The processes in the waiting queue are blocked and cannot run on the CPU until the event they are waiting for happens. When the event occurs, the process is moved from the waiting queue to the ready queue.
	
	A terminated queue is a queue that contains all the processes that have completed their execution or have been aborted by the operating system. The processes in the terminated queue are no longer active and can be removed from the memory. The operating system may perform some cleanup operations on the terminated processes, such as releasing their resources or sending exit codes.

3. • create a process • destroy a process • suspend a process • resume a process • change a process's priority • block a process • wake up a process • dispatch a process
4. The operating system performs a context switch to stop executing a running process and begin executing a previously ready process. To perform a context switch, the kernel must first save the execution context of the running process to its PCB. then load the ready process's previous execution context from its PCB.
	![](images/Pasted%20image%2020230426115102.png)
5. Interrupts  enable software to respond to signals from hardware. The operating system specify a set of instructions, called an interrupt handler, to be executed in response to each type of interrupt. 
	Types of interrupt:
	- Synchronous: occurs when a process attempts to perform an illegal actions, such as dividing by zero or referencing a protected memory location.
	- Asynchronous: Hardware devices issue asynchronous interrupts to communicate a status change to the processor. For example, the keyboard generates an interrupt when a user presses a key;