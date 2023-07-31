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


# Step 2: Build

To build GPGPU-Sim ensure that you are in bash shell.

Then run these commands:

    source setup_environment
    make

After make is done, the simulator would be ready to use. To exit the simulator run command

    make clean

    
