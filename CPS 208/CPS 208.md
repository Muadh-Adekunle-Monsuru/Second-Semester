## Computer Architecture & Organization 

[29/03/2023]
A computer is a device that takes input processes it and gives an output
It input is data, which are raw fact. 
the output is information. which is processed data

### Classes of computer
- Mainframe computer
- Mini Computer
- Super Computer
- Micro Computers

	- **Mainframe Computers**: These are large computers that can support, many users while delivering great computing power. It is mainly in mainframe computers where most of the innovations both in architecture and in organization are being made.   
	- **Mini Computers**: They have adopted many of the mainframe techniques. But it is cheaper compared to mainframe computers, and satisfying the computing needs for smaller group of users. It is mainly based on the evolution of integrated circuit technology. 
	- **Super Computers**: They are designed for scientific applications. They are the most expensive computers. Processing is usually in batches for reason of good performance. 
	- **Micro Computers**: They are based on micro processor technology, the term micro refers only to the physical dimension of the computer and not to the computing performance. They are a direct product of technological advancements. Fast CPUs,  and semiconductor memory.  

---
[5/4/2023]

### Digital Signal Processing
**Signals**: A signal can be defined as any physical quantity that varies with time, space or any other independent variable. 

DSP is concerned with the digital representation signals and the use of signal processors to analyze, modify or extract information from signals. Most signals in nature are in analogue form, meaning that they vary continuously with time and represent the variation of physical quantities, such as sound waves. 

---
### Computer Architecture

Computer architecture is the acts and science of building computers. It has to specify the performance requirements of various parts of the computer system. To define interconnections between the various parts of a computer and to keep the computer harmoniously balanced. 
Types of computer architecture
- Vaun Neuman Architecture: It describes a general framework or structure that a computer's hardware, programming and data should follow.  Although other structures for computing have being devised and implemented, the vast majority of computer they use today operate according to the Von Neuman Architecture. Contains the components
			- ALU: Arithmetic and Logical Unit
			- RAM: Random Access Memory
			- Control Units
			- Man to Machine Interfaces
	![img|300](images/Pasted%20image%2020230506081554.png)
- Harvard Architecture: Uses physically separated storage and signal pass-ways for their instructions and data. In a computer with Harvard architecture the cpu can read both an instruction and data from memory at the same time, leading to double the memory bandwidth. 
	Microcontroller based computer systems and DSPs are examples of Harvard Architecture.
![img|300](images/Pasted%20image%2020230506081517.png)
**What is Computer Organization**:
It refers to the logical aspects of an implementation on a computer, in other words, it refers to the high level aspects of the design, cpu design, memory system and bus memory structure of  the computer.

**What is Implementation:**
Implementation on a computer refers to the logical and physical design techniques used to represent an instance of the computer architecture. It is possible to have different implementation for some architecture, in the same way their are different possibility of building an house using the same plan. 

**Instruction Set Architecture**:
It refers to what the programmer sees as the machines instruction set. The instruction set is the boundary between the hardware and the software and most of the decisions concerning the instruction set affects the hardware adversely or beneficiary.  

---
### Computer Performance

Performance of a computer in the view of a user will consider the response time or execution time 
of the system. 

While in the view of a system manager will consider the throughput/bandwidth which is the number of jobs done in a certain amount of time. 


![[Canvas/Computer Performance.canvas]]

---
#### Effect of System Enhancement on Response Time & Throughput

Considering the following two system enhancement:
1. Faster CPU
2. Separate processors for different tasks

Does the two system enhance improve the response time, throughput, or both. 

For case 1, both response time and throughput are increased. For, case 2, multiple task can be processed at the same time, but no one gets done faster, hence only throughput is improved. 


Suppose we have to compare two machines A & B, the phrase is n% faster than B means that 
$$\frac{ExecutionTimeOfB}{ExecutionTimeOfA} = 1 + \frac{n}{100}$$

Performance of reciprocal of execution time. 

$$\frac{PerformanceA}{PerformanceB} = 1 + \frac{n}{100}$$

Example
If machine A runs a program in 5 seconds and machine B runs the same program in 6 seconds, how can the execution time of both machines be compared. 

$$\frac{6}{5} = 1 + \frac{n}{100}$$

$$\frac{6}{5}-1 = \frac{n}{100}$$
$$\frac{1}{5}= \frac{n}{100}$$

$$n = 20$$
Therefore A is 20% faster than machine B. The execution time of machine A is 20% than that of machine B. 

--- 
### Steps to perform WRITE operation.
In a specified memory location 
1.  The word to be stored in the memory location, is first loaded by the CPU into a specific register, called memory **data** register. 
2. The address of the location into which the word is to be stored, is loaded by the CPU into a specified register, called memory **address** register. 
3. A signal referred to as WRITE is issued by the CPU, indicating that the word stored in the MDR is to be stored in the memory location whose address is loaded in the MAR

### Steps to perform READ operation.
In a specified memory location
1. The address of the location from which the word is to be read is loaded into the memory address register. MAR
2. A signal called READ is issued by the CPU, indicating that the word whose address is in the MAR is to be READ into the MDR. 
3. After some time corresponding to the memory delay in reading the specified word the required word would be loaded by the memory into the MDR ready for the use by the CPU. 


---
## Instructions Types
[12/04/2023]

- Data Movement Instructions
- Arithmetic & Logic Instructions
- Sequencing Instructions
- Input/Output Instruction


- **Data movement Instructions:** they are used to move data among the different units of a computer, most important among these are instructions that are used to move data among the different registers in the CPU. A simple register to register movement can be made through these instructions. 
	Common Types:
		- **MOVE**: It moves data from a given sources, register or memory, to a given destination.
		- **LOAD**: It is used to load data from the memory to a register.  
		- **STORE**: It is used to store data into the memory from the register
		- **PUSH**: Will store data from a register to a stack
		- **POP**: It is used to retrieve data from the stack into the register. 

- **Arithmetic and Logical Instructions**: Are those instructions that is used to perform arithmetic and logical manipulation of register and memory contents. 
		**Arithmetic**:
				- **ADD**: They are used to perform arithmetic sum of two operands. 
				- **SUBTRACT:** They are used to perform the arithmetic difference of two operands.
			   - **MULTIPLY:** Used to perform the product of two operands
			   - **DIVIDE**: It is used to perform division of two operands. 
			   - **INCREMENT**:  +1 Used to add 1 to the content of the register
			   - **DECREMENT**: -1 Used to subtract one from the content of the register
		**Logical**
				 - **OR**: It performs the logical ORing of two operands
				 - **AND**: It performs the logical ANDing of two operands
				 - **NOT:** It performs the complement of an operands. 

- **Sequencing Instructions**: They are control instructions used to change the sequence in which the instructions are executed.  They can take the form of conditional branching, conditional jump, unconditional branching call instruction. A common characteristics of these instruction , is that their execution changes the program counter value. 
			- **Branch-IF-Condition:** Are used in the transfer of control to a new address if a condition is true. 
			- **CALL:** It is used in the transfer of control to a sub-routine.
			- **JUMP**: Unconditional transfer of control
			- **RETURN:** Used in the transfer of control to the caller routine.

- **Input/Output Instruction:** Are used to transfer data between the computer and the peripheral device. The two basic units of inputs and outputs instructions are the:
	- **INPUT Instructions:** the INPUT instruction is used to transfer data from an input device to the processor. 
	- **OUTPUT Instruction:** While the OUTPUT instruction is used to display the information (processed data) 

---
### DATA
**Two types of data:**
	- **Variables:** Type of data that changes over time, it could be of two types
			- Numeric: It is a variable that made up of only number.
			- Alphanumeric
   - **Constant:** Type of data that doesn't change with time.
	   - Numeric
	   - Alphanumeric

---
### Building Blocks of a computer
[19/04/2023]


Today's generation of computers are called Neuman's computer simply because their main building parts, CPU or Processor, memory and I/O are connected in the way of Vaun Neuman as represented in the diagram.

The CPU is the core of the computer, where all the computations are done. The whole system is also controlled by the CPU.

Memory: This is where the program and the data for the program are stored.

I/O; The input and output provides means of entering the program and the data into the system. It also allows the user to get the result of the computation. 

### Computation control in CPU
The computation part of the CPU is called the data patch, it contains most of the CPUS states, which is the information the programmer save when the program is suspended, restoring this information makes the computation looks like nothing had happened.
The CPU states include:
- Program Counter (PC)
- Interrupt Address Register (IAR)
- Program Status Register (PSR)

The CPU consists of:
- ALU: Arithmetic and Logical units: which performs the arithmetic and logical operations
- Registers: which hold variables or intermediary results of computation, as well as special purposes.
- Interconnections: Between the internal buses.

---
[03/05/2023]
## IC
Complex digital circuits are constructed with integrated circuits IC, IC is a small silicon semiconductor crystal called a chip containing the electronic components of the digital gates, the various gates are interconnected inside the chip, to form the required circuits, the chip is then mounted on a ceramic or plastic container. And the connections are wielded to the external pins to form an IC. The number of pins on IC varies from 14 to several thousands, each pin is identified by a unique number printed on its body. 

### Categories of ICs:
- **SSI**: Small Scale Integrated Circuit, it contains several independent gates in a single package. The inputs and outputs of the gates are connected directly to the pins the package. The number of gates is usually less than 10
- **MSI**: It contains 10-200 gates in a single package, they perform elementary digital functions such as decoders, adders, and registers
- **LSI:** This contains between 200 to few 1000 in a single package, They include digital systems such as, processors, and memory chips. 
- **VLSI:** It contains thousands of gates in a single package, such as microcomputer chips
- **ULSI:** This contains hundreds of thousands of gates within a single package, such as microcomputer chi

---
#### Digital Logic Family

**Digital Logic Family:** It is the classification of ICs by the specific circuit technology to which they belong the basic circuit in each technology is [NAND, NOR and NOT] Gates, the earliest logic family was Resistor Transistor Logic( Which used resistors as inputs and transistors as switching device) 

- DTL (Diode Transistor Logic)
- TTL (Transistor Transistor Logic)
- ECL( Emitter Couple Logic)

- **DTL (Diode Transistor Logic)**: It is a direct ancestor to the TTL, and it used a diode for logic functions, and a transistors for amplifying functions.
- **TTL (Transistor Transistor Logic)**: It is the modified form of DTL, the diodes were replaced by transistor to improve the circuit operation. It is called a transistor to transistor logic because, transistors perform **both** the logic functions and the amplifying functions. 
	- since the power dissipation does not depend on the frequency, the power speed does not increase with clock speed.
	- Compared to ECL circuits, TTL uses less power but is comparatively slower. 
	- TTL is less prone to damage due to electrostatic discharge. 
	- Before VLSI devices TTL circuits were used in the construction of processors for minicomputers and mainframe computers. 
	**Advantages of TTL**:
	- They are fast
	- It has low propagation delay
	- Power dissipation does not depend upon the frequency. 
- **ECL( Emitter Couple Logic)** It provides highest speeds digital circuit, it is used in systems such as supercomputers and signal processors where high speed is required. 
	- In an ECL circuits each gate continuously draws current when inactive, hence the power consumption is more compared to other logic families. 
	- The large current requirement of ECL is constant and does not depend on the state of the circuit, which is the reason for low power noise.
 **Advantages:**
	- Fastest Logic Family
	- Propagation Delay is Less
	- Noise margin is extremely low`

--- 

# Encoders and Decoder
[10/05/2023]

A decoder is a combinational circuit that converts binary information from N coded inputs to $2^N$ outputs, a commercial decoder includes one or more enabled E input to control the operation of the circuit. The decoder is enabled when E = 1 and disabled when E = 0. Decoders are used in code converters, and are also used to implement boolean functions,

An encoder is a digital circuit, which performs the inverse operation of a decoder, an encoder has $2^N$ input lines and $N$ output line, an encoder usually <mark style="background: #CACFD9A6;">converts</mark> octal input to binary digits. 

**Types of encoders:**
1. Priority Encoders
2. Decimal to BCD
3. Octal to Binary
4. Hexadecimal to Binary

**Advantages of Encoders:**
- Highly reliable and accurate
- Low-cost feedback
- High-resolution
- Integrated electronics
- Compact Size
- It can be incorporated into existing applications 
- It fuses optical and digital technology

**Disadvantages of Encoder:**
- Subject to magnetic or radio interference
- It has direct light source interference 
- It is susceptible to dirt oil and dust contaminants  

### Multiplexer
It is a combinational circuit that receives binary information from one of the $2^N$ input lines and direct it to a single output line. 

**Advantages of Multiplexers:**
- Reduces number of wires used in a circuit
- It reduces circuit complexity and cost
- It simplifies logic design
- It can implement many combinational circuit
- It does not need K-maps and simplification

**Disadvantages of Multiplexers:**
- Added delay in switching ports
- Added delay in input/output signals propagating through the multiplexer
- Limitations on which ports can be used simultaneously 
- Extra input/output ports are required to control the multiplexer
- Added firmware complexity to handle switching ports



Basic Units of a computer system:
- Inputs
- Outputs
- Storage
- Arithmetic and Logical Units
- Control Units

Input Units: connects the external environment with internal computer system, i provides data and instruction to the computer. Keyboard, mouse, scanner, e.t.c

Output: Connects the internal system of a computer to the external environment, it provides the result of any computation or instructions to the outside world, monitors, printers, speaker

Storage Units: Holds the data and instructions, it also  stores the immediate result before they are sent to the output device, it can also store data for later or future use, 
	Categories:
		- Primary storage: used to store data which is being currently executed, it is used as temporary storage of data
		- Secondary Storage: Used for permanent storage of data, the important example hard disk

ALU: Arithmetic and Logical Units: all the calculations are performed in the ALU of the computer system, such as addition subtraction division multiplication e.t.c. whenever calculation is required the control unit transfer the data from the storage unit to the ALU, and when the operation is done the result is transfer back to the storage unit.

Control Unit: It controls all the other units of a computer, it controls the flow of data and instructions to and from the storage unit to the ALU It is also known as the central nervous system
When the CU and ALU are put together it is know as the CPU



### Logic Gates
Blocks of hardware that produces graphical symbol and its operation can be described by means of an algebraic expression, It is used to describe in algebraic and tabular form the manipulation done 
by logic circuit it also deals with binary variables and with operation that assume a logical meaning

Examples are:
- OR: Produces the inclusive OR Function, the output is one if input A or B or both inputs are one.Othe wise the ouput is 0 The symbol + 
- AND: Produces the AND logic function
- NOT: also called inverter, produces the compliment of an input, 
- NOR: The complement  of the OR gate
- NAND: The complement of the AND function


---



### Chapter 5 : Registers in Computer Architecture.

REGISTER: Register is a very fast computer memory, used to store data/instruction in execution. A Register is a group of flip-flops with each flip-flop capable of storing one bit of information. An n-bit register has a group of n flip-flops and is capable of storing binary information of n-bits.

The transfer of new information into a register is referred to as loading the register. 

The symbolic notation used to describe the micro-operation transfers amongst registers is called **Register transfer language**.
The term register transfer means the availability of hardware logic circuits that can perform a stated micro-operation and transfer the result of the operation to the same or another register.

Common Registers
1. **Accumulator:** Store data taken out from the memory
2. **General Purpose Registers:** Store data intermediate results during program execution. 
3. **Special Purpose Registers:** Cannot be accessed by users. Specially used for computer systems.
4. **MAR:** Memory Address Register. Holds address for memory unit.
5. **MBR:** Memory Buffer Register. Stores instruction and data received and sent  from the memory
6. **PC:** Program Counter. Points to the next instruction to be executed
7. **IR**: Instruction Register. Holds the instruction to be executed. 

Operations executed on data stored in registers are called micro-operations. 
Types of micro-operations:
1. **Register Transfer micro-operations:** transfers binary information from one register to another.
2. **Arithmetic micro-operation:** performs arithmetic operations on numeric data stored in registers.
3. **Logic micro-operations** performs bit manipulation operations on non-numeric data stored in registers
4. **Shift micro-operations** perform shift micro-operations on data

----
## Chapter 6
Addressing mode: The method in which an operand is selected during the program execution. 
Purpose of addressing mode:
- Give the programming versatility to the user
- To Reduce the number of bits in addressing filed of instruction

#### Types of addressing modes:
1. Immediate Mode
2. Register Mode
3. Direct Mode
4. Register Indirect Mode
5. Indirect addressing mode

Immediate mode: the operand is specified in the instruction itself. An immediate mode instruction has an operand field rather than the address field.
E.g. ADD 7, 7 is the operand.

Register Mode: In this mode the operand is stored in the register and this register is present in CPU. The instruction has the address of the Register where the operand is stored.
![](images/Pasted%20image%2020230605204757.png)
Register Indirect Mode:  the instruction specifies the register whose contents give us the address of operand which is in memory. Thus, the register contains the address of operand rather than the operand itself

Direct addressing mode: In this mode, effective address of operand is present in instruction itself.
![](images/Pasted%20image%2020230605205355.png)
Indirect addressing mode: In this, the address field of instruction gives the address where the effective address is stored in memory. This slows down the execution, as this includes multiple memory lookups to find the
operand.
![](images/Pasted%20image%2020230605205456.png)
### Instruction Cycle
The CPU executes each instruction provided to it, in a series of steps,
this series of steps is called **Machine Cycle**, and is repeated for each instruction. 

One machine cycle involves:
- fetching of instruction
- decoding the instruction
- transferring the data & executing the instruction.

1. The instruction to be executed, whose address is obtained from the PC, is fetched from the memory and stored in the IR
2. The instruction is decoded
3. Operands are fetched from the memory and stored in CPU registers
4. The instruction is executed
5. Results are transferred from CPU registers to the memory

---
### Memory
What is the main memory:
It is the memory unit that communicates directly within the CPU, Auxillary memory and Cache memory. It is the central storage unit of the computer system. Main memory is made up of RAM and ROM. 

Types of Ram:
- DRAM
- SRAM
- NVRAM

DRAM: Dynamic RAM, it is made up of capacitors and transistors and must be refreshed every 10-100ms. It is slower and cheaper than SRAM

SRAM: Static RAM, it has a six transistor circuit in each cell and retains data, until powered off. 

NVRAM: Non-Volatile RAM, it retains its data, even when turned off. 

What are auxiliary memory:
Devices that provide backup storage. It is not directly accessible to the CPU, and it is accessed using the I/O channels.

What is Cache Memory:
The data or contents of the main memory that are used again and again by the CPU are stored in the cache memory.

What is Hit Ratio:
The performance of cache memory is measured in terms of a hit ratio. When the CPU finds the word in cache it is a hit, if the word is not found in cache it is a miss. 

What is associative memory:
Also known as content addressable memory (CAM). It is a memory chip in which each bit positions can be compared. Since the entire chip can be compared, contents are randomly stored without consiering addressing scheme. 

---
## Pipelining

What is pipelining: Pipelining is the process of accumulating instructions from the processor through a pipeline. It allows storing and executing instructions in an orderly process.

How does pipelining works:
Pipelining is a technique where multiple instructions are overlapped during execution. 
Each segment consists of an input register followed by a combinational circuit. The register is used to hold data and combinational circuit performs operations on it. The output of combinational circuit is applied to the input register of the next segment.

Types of pipeline:
- Arithmetic Pipeline
- Instruction Pipeline

Arithemetic Pipeline: They are used for floating point operations, multiplication of fixed point numbers etc.

Instruction Pipeline: A stream of instructions can be executed by overlapping fetch, decode and execute phases of an instruction cycle. It is used to increase the throughput of the system. 

How does instruction pipeline work
An instruction pipeline reads instruction from the memory while previous instructions are being executed in other segments of the pipeline. 

Pipeline Conflicts:
1. Timing Variations: All stages cannot take the same amount of time,
2. Data Hazards: When several instructions are in partial execution, and if they reference the same data. 
3. Branching: If the present instruction is a conditional branch, and its results will lead us to the next instruction, then the next instruction is not known until the current one is processed.
4. Interrupts: interrupts set unwanted instruction into the instructiton stream. 
5. Data dependency: arises whene an instruction depends upon the result of an instruction but the result is yet to be available. 

### Advantages of Pipelining
1. The cycle time of the processor is reduced.
2. It increases the throughput of the system
3. It makes the system reliable

Disadvantages of Pipelining
1. The design of pipelined processor is complex and costly to manufacture
2. the instruction latency is more

---
Modes of I/O Data transfer
1. Programmed I/O
2. Interrupt Initiated I/O
3. Direct Memory Access

Programmed I/O: Each data item transfer is initiated by the instruction in the program. It requires constant monitoring of the peripherals by the CPU. It is time consuming and keep processor constantly busy. 

Interrupt Initiated I/O: When the interface determines that the peripheral is ready for data transfer, it generates and interrupt. The CPU stops the task which it is processing and service the I/O transfer and then returns back to its previous processing task. 

Direct Memory Access: Removing the CPU from the path and letting the peripheral device manage the memory buses directly. The interface transfers data to and from the memory through memory bus. 

Input/Output Processor: IOP, it is a processor with direct memory access capability. The computer system is divided into a memory unit and number of processors. Each IOP controls and manages he input-output task. 

---
## Interrupts
Priority Interrups: A priority interrupt is a system which decides the priority at which various devices, which generates interrupt signals at the same time, will be serviced by the  CPU. 

Types of Interrupt:

- Hardware Interrupts: When the signal is from an external device or hardware. 
	- Maskable Interrupt: The hardware interrupt which can be delayed when a much high priority interrupts has occured at the same time. 
	- Non maskable interrupt: The hardware interrupts which cannot be delayed and should be processed by the processor immediately
- Software Interrupt: The interrupt that is caused by an internal system of the computer system. 
	- Normal Interrupt: The interrupts that are caused by software instructions
	- Execption: Unplanned interrupts which are produced during the execution of some programs. 

---
### Modes of Transmission
Data can be transmitted between 2 point by three different modes:
- Simplex: Carries information in one direction only. Receiver cannot communicate with the sender.
- Half Duplex: System is capable of transmitting data in both directions but data can be transmitted in one direction only at a time. Uses two wires
- Full Duplex. Data can be sent and received in both directions simultaneously. Four wire links are used. 

---
## Protocols
A protocol is a set of rules that are followed by interconnecting devices to ensure that all data is passed correctly without any error. 

Types of protocols
- Character Oriented Protocol
- Bit Oriented Protocol

Character Oriented Protocol: It is based on the binary code of character set. The code generally used is ASCII (American Standard Code for Information Interchange). It is a 7-bit code with an eighth bit used for parity.

Bit Oriented Protocol: is a communications protocol that sees the transmitted data as an opaque stream of bits with no semantics, or meaning. Control codes are defined in terms of bit sequences instead of characters. Bit oriented protocol can transfer data frames regardless of frame contents.