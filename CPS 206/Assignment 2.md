Assignment 2:
1. What is buffer in computer memory

A buffer is a temporary storage area in the computer memory hierarchy that holds data while it is being transferred between two devices or processes. Buffers can improve the performance and efficiency of data transfers by reducing the number of disk accesses, network delays, or CPU cycles. Buffers can also help to synchronize data flows between devices or processes that operate at different speeds or have different data formats.




2. Operating system architecture:
	1. Monolithic
	2. Layered
	3. Microkernel

An operating system is a software that manages the hardware and software resources of a computer. There are three main types of operating system architectures: monolithic, microkernel, and hybrid.

A monolithic operating system is one where all the components of the system, such as device drivers, file systems, and network protocols, are integrated into a single kernel. This makes the system fast and efficient, but also complex and difficult to maintain. A monolithic operating system is used when performance and reliability are critical, such as in embedded systems or servers.

A microkernel operating system is one where only the essential components of the system, such as memory management, process scheduling, and inter-process communication, are part of the kernel. The rest of the components are implemented as separate modules or processes that communicate with the kernel through a well-defined interface. This makes the system modular and flexible, but also slower and less efficient. A microkernel operating system is used when portability and security are important, such as in mobile devices or distributed systems.

The layered structure breaks up the operating system into different layers and retains much more control on the system. The bottom layer (layer 0) is the hardware, and the topmost layer (layer N) is the user interface. These layers are designed that each layer uses the functions of the lower-level layers only. Layered OS are more modular than monolithic because each layer can be modified/tested/debugged without requiring any modification to other layers.  

A hybrid operating system is one that combines elements of both monolithic and microkernel architectures. It may have a large kernel that contains some non-essential components, or a small kernel that relies on some external modules. The goal of a hybrid operating system is to balance the trade-offs between performance and modularity. A hybrid operating system is used when both performance and flexibility are desired, such as in personal computers or gaming consoles.

