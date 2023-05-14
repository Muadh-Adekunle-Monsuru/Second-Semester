[13/5/2023]
**Extensive reading about process scheduling and the algorithm involved in scheduling processes**

Process scheduling is  a strategy a system has for deciding which process to run at a given time.
Process scheduling is a key function of an operating system that manages the allocation of CPU time to processes. The scheduling mechanism may take into account factors such as process priority levels, the amount of time each process has already been running, and the resources required by each process. 

Aims of process scheduling:
- Throughput: Maximizing number of processes that complete per unit time
- Latency: Minimizing the time each process waits before executing
- Preventing indefinite postponement of processes
- Ensuring that each process completes before its deadline
- Maximizing processor utilization

Three scheduling levels:
- High-level scheduling / Job scheduling
- Intermediate-level scheduling
- Low-level scheduling

High-level scheduling: Determines which jobs gain admission to the system. Jobs can be a group of processes

Intermediate scheduling: Determines which processes shall be allowed to compete for processors

Low-level: Determines which active process the system will assign to a processor when one next becomes available.



Scheduling disciplines are either:
- preemptive 
- nonpreemptive scheduling

Preemptive: If the system can remove the processor from the process it is running. 
Nonpreemptive: If once the system assigned a processor to a process, the system cannot remove that processor from that process

Scheduling Algorithms
1. First-Come, First-Served (FCFS): In this algorithm, the OS assigns CPU time to processes in the order that they arrive. This algorithm is simple to implement, but it can lead to long wait times for processes that arrive later.

2. Shortest Job First (SJF): In this algorithm, the OS assigns CPU time to the process with the shortest estimated processing time. This algorithm minimizes the average wait time for all processes, but it requires accurate estimations of each process's processing time.

3. Priority Scheduling: In this algorithm, each process is assigned a priority level based on its importance or urgency. The OS then allocates CPU time to processes with higher priority levels first. This algorithm can ensure that critical processes receive CPU time first, but it can also lead to lower-priority processes being starved of CPU time.

4. Round-Robin Scheduling: In this algorithm, the OS assigns each process a fixed time slice called a quantum, and then rotates through all processes, allocating one time slice to each process in turn. This algorithm ensures that no process is starved of CPU time, but it can also lead to long wait times for processes with large time requirements.

