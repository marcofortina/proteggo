# Immutable Data Storage on the Blockchain

Proteggo is a C++ application that leverages blockchain technology to provide a secure and immutable platform for storing data and files. It utilizes robust encryption techniques to safeguard sensitive information, ensuring that only authorized individuals with the corresponding private keys can access and decrypt the stored data.

## Key Features
* __Immutability__: Data stored on the blockchain is tamper-proof and cannot be altered or deleted, guaranteeing the integrity and authenticity of the information.

* __Security__: Data is encrypted using robust cryptographic algorithms, protecting it from unauthorized access and ensuring confidentiality.

* __Decentralization__: The blockchain's distributed nature eliminates the need for a central authority, minimizing the risk of data breaches and manipulation.

* __Indexed Search__: Efficient search capabilities enable users to quickly locate specific data or files within the blockchain.

* __Standalone or High-Availability Deployment__: Proteggo can be deployed in standalone mode for personal use or in a high-availability configuration across multiple nodes for enhanced reliability and scalability.

* __Secure Communication__: All server-to-server and server-to-client communications are protected by TLS, ensuring data confidentiality and integrity during transmission.

## Getting Started

### 1. Clone the Repository:
```bash
git clone https://github.com/marcofortina/proteggo.git
```

### 2. Build and Install:
```bash
cd proteggo
./autogen.sh
./configure
make -j$(nproc)
sudo make install
```

## Contributing
We welcome contributions to the Proteggo project. Please refer to the [CONTRIBUTING.md](https://github.com/marcofortina/proteggo/blob/main/CONTRIBUTING.md) file for guidelines on submitting pull requests and reporting issues.

## License
Proteggo is licensed under the MIT License: https://opensource.org/licenses/MIT
