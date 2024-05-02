// Copyright (c) 2024 Marco Fortina
// Distributed under the MIT software license, see the accompanying
// file LICENSE or https://opensource.org/license/MIT.

#include <proteggo-node.h>

#include <iostream>
#include <thread>
#include <vector>

void RestServer() {
    while (f_shutdown == false) {
        std::cout << "Thread RestServer..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void MinerServer() {
    while (f_shutdown == false) {
        std::cout << "Thread MinerServer..." << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

int main(int argc, char* argv[]) {
    std::vector<std::thread> threads;

    threads.emplace_back(RestServer);
    threads.emplace_back(MinerServer);

    for (auto& thread : threads) {
        thread.join();
    }

    return 0;
}
