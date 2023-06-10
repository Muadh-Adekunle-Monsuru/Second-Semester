 Compare and contrast microprogrammed and hardwired control units
  Both of them are center of coordination of all the activities that occur in their computer systems. 

Microprogrammed | Hardwired
--- | ---
The control signals associated with operations are stored in special memory units inaccessible by the programmer as control words | Fixed logic circuits that correspond directly to the Boolean expressions are used to generate control signals
A sequence of microinstructions is called a microprogram, which is stored in a ROM or RAM called a control memory CM | It does not have any control memory
It is slower than hardwired | It is faster than hardwired
It is cheaper than Hardwire control | It can be expensive and complicated for complex systems
It could adapt easily to changes in the system design | Require a redesign of the entire system

What is semantic gap
It is a measure of the difference between the oerations provided in the high level languages and those provided in computer architectures

The wider the semantic gap the large the number of undesirable consequences. 

Consequences of wide semantic gap
1. Execution inefficiency
2. Increased compiler complexity
3. Execessive machine program size

Common characteristics of RISC machines
- Simple and reduced instruction set
- one instruction per machine cycle
- pipeline instruction fetch/execute unite
- hardwired control unit design

What constitutes a carefully selected reduced set of instructions in RISC based machines
a) operations that are most frequently performed during execution of typical
b) operations that are most time consuming, and;
c) the type of operands that are most frequently used.

What is the concept of shared I/O arrangement
I/O devices are assigned particular addresses, isolated from the address space assigned to the memory.

The execution of an input instruction at an input device address will cause the character
stored in the input register of that device to be transferred to a specific register in the
CPU.
Similarly, the execution of an output instruction at an output device address will cause the character stored in a specific register in the CPU to be transferred to the output register of that output device