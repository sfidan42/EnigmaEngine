# Enigma Engine
## Intro
- Enigma is the central, Sandbox the manager
- I am getting help from [theCherno/Hazel](https://github.com/TheCherno/Hazel)
- Apache Licence V2.0

## Before Beginning:
### Windows 10+
1) To install chocolatey, run the code below with powershell as root:
    - `Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))`

2) to install `make` use the code below with powershell as root:
    - choco install make
3) [Install git](https://gitforwindows.org/)
4) [Install gcc and g++, use minGW](https://www.mingw-w64.org/)

### Ubuntu 22.04LTS
```
sudo apt install make
sudo apt install git
sudo apt install gcc
sudo apt install g++
```

### Running the program:

1) compile the code: `make` or `make re`
2) run the code: `make run`
