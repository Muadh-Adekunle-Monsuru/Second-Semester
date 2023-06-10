[13/5/2023]
**Extensive reading about process scheduling and the algorithm involved in scheduling processes**

Process scheduling is  a strategy a process manager has for deciding which process to run at a given time.
Process scheduling is a key function of an operating system that manages the allocation of CPU time to processes. The scheduling mechanism may take into account factors such as process priority levels, the amount of time each process has already been running, and the resources required by each process. 

<mark style="background: #ABF7F7A6;">Activity of the process manager, which removes running process, and selects another ready process based on a strategy.</mark>

**Aims of process scheduling:**
- Throughput: Maximizing number of processes that complete per unit time
- Latency: Minimizing the time each process waits before executing
- Preventing indefinite postponement of processes
- Ensuring that each process completes before its deadline
- Maximizing processor utilization
- Fairness
- Policy enforcement

**Three scheduling levels:**
- High-level scheduling / Job scheduling
- Intermediate-level scheduling/ Medium term 
- Low-level scheduling

**High-level scheduling:** Determines which jobs gain admission to the system. Jobs can be a group of processes. All the instructions needed for the dispatched process in the memory is moved to a memory closer to the processor.

**Intermediate scheduling:** Determines which processes shall be allowed to compete for processors. It temporarily suspends and resumes processes to achieve smooth system operation and to help realize certain systemwide performance goals. The intermediate-level scheduler acts as a buffer between the admission of jobs to the system and the assignment of processors to the processes representing these jobs. places blocked processes in other memory location

**Low-level:** Determines which active process the system will assign to a processor when one next becomes available. Also blocks events and sends them to ready queue.



**Scheduling disciplines are either:**
- preemptive 
- nonpreemptive scheduling

**Preemptive**: If the system can remove the processor from the process it is running. 

**Nonpreemptive**: If once the system assigned a processor to a process, the system cannot remove that processor from that process


**Scheduling Algorithms**
These algorithms is a policy that decides when and for how long each process runs; they make choices about preemptibility, priorities, running time, time-to-completion, fairness and other process characteristics

1. First-Come, First-Served (FCFS): In this algorithm, the OS assigns CPU time to processes in the order that they arrive. This algorithm is simple to implement, but it can lead to long wait times for processes that arrive later. 
	- It is non-preemptive,
	- it is fair for most processes, but unfair to short processes that joined later.
	- yes, the turn around time would be minimal for both batch and real-time
	- Used within other algorithms

2. **Shortest Job First (SJF)/Shortest Process Next (SPN)**: In this algorithm, the OS assigns CPU time to the process with the shortest estimated processing time. This algorithm minimizes the average wait time for all processes, but it requires accurate estimations of each process's processing time. It is <mark style="background: #FFB86CA6;">non-preemptive.</mark> Not good in a time sharing environment.
	- Similar to **Shortest Remaining Time:** it is preemptive, if a process is currently executing and a shorter process arrives, the SRT would remove the currently executing process for the shorter one, 

3. **Priority Scheduling:** In this algorithm, each process is assigned a priority level based on its importance or urgency. The OS then allocates CPU time to processes with higher priority levels first. This algorithm can ensure that critical processes receive CPU time first, but it can also lead to lower-priority processes being starved of CPU time. An integer number is attached to every process that would be different from the execution time, the number is a measure of the processes priority. can be used in batch system. If a process has a lowpriority and high priority processes keeps coming the process would be waiting for a long time, the system should find a way to increase the priority of said process.  
	1. can be used in hostpital settings 
	2. It is both preemptive and non-preemptive. 

5. **Round-Robin Scheduling:** In this algorithm, the OS assigns each process a fixed time slice called a quantum, and then rotates through all processes, allocating one time slice to each process in turn. This algorithm ensures that no process is starved of CPU time, but it can also lead to long wait times for processes with large time requirements. It is the fairest. It is preemptive.

6. Multilevel Queue: Queues are divided into multiple queues based on different criteria's such as wait time, priority and soon. Each of the queues then have different algorithms. If it a single processor, then the processor has to know how to share time among all the queues had.  
	1. It is fair.
	2. It is both preemptive and nonpreemptive
 7. Multilevel feedback queues: It is similar to multilevel queue. Processes can move from one queue to another queue based on their executing time. It is a combination of priority scheduling  and round-robin scheduling. 
	 1. It is fair
	 2.   Multiple queues: Processes are divided into multiple queues based on their priority.
	3.    Priorities assigned: Priorities are assigned to processes based on their type, characteristics, and importance.
	4.  Preemption: Processes can be preempted from a lower-priority queue to run a process in a higher-priority queue

Burst Time: <mark style="background: #ABF7F7A6;">Time a process needs to execute</mark>

### CPU Scheduling Evaluation
Consider the following processes that arrived with the priority  shown in the table 
1. Draw the Gannt chart to illustrate the execution of the processes based on 
	1. First come first server
	2. SJF
	3. Priority Scheduling (<mark style="background: #BBFABBA6;">Lower number means higher priority</mark>)
	4. Round-robin (Quantum size = 3)
2. The average waiting time from each algorithm and waiting time for each process

Process | Burst time | priority 
---|---|---
P1 |8 |4
P2 | 6  | 1
P3 | 1 | 2
P4 | 9 | 2
P5 | 3 | 3


Process | Arrival Time | Burst Time | Priority
--- | --- | --- | ---
p1 | 0 | 7 | 2
p2 | 1 | 5 | 3
p3 | 2 | 3 | 4
p4 | 3 | 1 | 5
p5 | 4 | 2 | 5
p6 | 5 | 1 | 3
