# COA-Lab
Welcome to GPGPU-Sim, a powerful cycle-level simulator designed for contemporary GPUs running CUDA or OpenCL workloads. GPGPU-Sim comes with two essential tools: AerialVision for performance visualization and GPUWattch, an adaptable energy model. Both GPGPU-Sim and GPUWattch have undergone rigorous validation using real hardware GPUs to ensure accurate performance and power measurements.
# Step 1: Install Dependencies.

GPGPU-Sim dependencies:
We have used latest version of all the pakages.

    sudo apt install gcc

    sudo apt-get install build-essential xutils-dev bison zlib1g-dev flex libglu1-mesa-dev

    
GPGPU-Sim documentation dependencies:

    sudo apt-get install doxygen graphviz

AerialVision dependencies:

    sudo apt-get install python-pmw python-ply python-numpy libpng-dev python3-matplotlib

CUDA SDK dependencies:

    sudo apt-get install libxi-dev libxmu-dev freeglut3-dev

Finally add the path of CUDA Toolkit into the ~/.bashrc file 
(this assumes the CUDA Toolkit was installed in /usr/local/cuda).

Note: First enter into bash shell and then enter these commands

    export CUDA_INSTALL_PATH=/usr/local/cuda
    export PATH=$CUDA_INSTALL_PATH/bin
# Step 2: Download and Install GPGPU-Sim

1. Download GPGPU-Sim from GitHub.

Before copying the command make sure you have Git installed in your computer.

Check by typing the below command

      git --version

Then clone the repository:

       git clone https://github.com/gpgpu-sim/gpgpu-sim_distribution.git


# Step 3: Build

To build GPGPU-Sim ensure that you are in bash shell in the cloned folder.

Then run these commands:

    source setup_environment
    make

After make is done, the simulator would be ready to use. To exit the simulator run command

    make clean

    
# Step 4: Run 

You should have a cuda executable file.

Make a test folder in that make a file let its name be test.cu

Write a "Hello World" program in Cuda-language in test.cu file.

Then enter these commands:

        cp -r ~/Downloads/gpgpu-sim_distribution/configs/tested-cfgs/SM75_RTX2060/* ./

        source ~/Downloads/gpgpu-sim_distribution/setup_environment

## Explaination of above commands
1.The command cp -r ~/Downloads/gpgpu-sim_distribution/configs/tested-cfgs/SM75_RTX2060/* ./ is a shell command that performs a recursive copy of files and directories. Let's break down the command step by step:

cp: This is the command for copying files and directories in Unix-based systems.

-r: This is an option for the cp command, which stands for "recursive." It allows the cp command to copy directories and their contents.

/Downloads/gpgpu-sim_distribution/configs/tested-cfgs/SM75_RTX2060/*: This specifies the source path from where the files and directories will be copied. In this case, it points to all the files and directories inside the "SM75_RTX2060" directory located in the "tested-cfgs" directory within the "gpgpu-sim_distribution" directory under the user's home folder (~ represents the home directory).

./: This specifies the destination path where the files and directories will be copied. In this case, it refers to the current directory (the directory where the cp command is executed).

Putting it all together, the command will copy all files and directories inside the "SM75_RTX2060" directory (located in "tested-cfgs" within "gpgpu-sim_distribution") to the current directory. It essentially replicates the contents of the "SM75_RTX2060" directory in the current location.


2.The command source ~/Downloads/gpgpu-sim_distribution/setup_environment is used to set up the environment variables and configurations required to run the GPGPU-Sim simulator and its related tools, such as AerialVision and GPUWattch.

Here's what the command does step by step:

source: This is a shell built-in command that reads and executes commands from a file and sets them within the current shell session. It is commonly used to set environment variables and aliases.

/Downloads/gpgpu-sim_distribution/setup_environment: This specifies the path to a script file called "setup_environment" located in the "gpgpu-sim_distribution" directory under the user's home folder (~ represents the home directory).

The script "setup_environment" contains commands to configure the necessary environment variables, paths, and settings specific to the GPGPU-Sim simulator, AerialVision, and GPUWattch.

By running this command, you enable the necessary configurations for GPGPU-Sim to function correctly, making it ready for use in the current shell session. It's worth noting that the specific actions performed by the "setup_environment" script depend on its contents, which are related to the setup requirements of GPGPU-Sim and its tools.

## Compilation and execution

To complie and run the file run command

        nvcc -lcudart test.cu
        ./a.out

