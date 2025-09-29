#include <iostream>
#include "../CybersecurityforironmanWithRisksmanagelent/BiosAI/ListOfSignalsErrorUiUX.h"
#include "../CryptopowereeTokensCpuGpu/PowerfullArmsToApproximateMassTransferToTokensErrorSoft.h"

int main()
{
    biosai::LightVirtualMachineInBiosForContract vm;
    vm.bootOsFromBiosAiWithSyncGpus();
    vm.addOsToBootWithOneSignal();
    vm.addOsToBootWithOneSignal();
    std::cout << "VM booted: " << (vm.isBooted() ? "yes" : "no") << "\n";
    std::cout << "OS count: " << vm.getOsCount() << "\n";
    vm.reset();
    std::cout << "After reset -> booted: " << (vm.isBooted() ? "yes" : "no") << ", OS count: " << vm.getOsCount() << "\n";

    arms::ErrorPoweredOsHandler osHandler;
    osHandler.initialize();
    std::cout << "Arms OS initialized: " << (osHandler.isInitialized() ? "yes" : "no") << "\n";
    osHandler.shutdown();
    std::cout << "Arms OS initialized after shutdown: " << (osHandler.isInitialized() ? "yes" : "no") << "\n";

    arms::ErrorPoweredIsosOnSecondArmsStack isos;
    isos.mount();
    std::cout << "ISOs mounted: " << (isos.isMounted() ? "yes" : "no") << "\n";
    isos.unmount();
    std::cout << "ISOs mounted after unmount: " << (isos.isMounted() ? "yes" : "no") << "\n";

    arms::TokensSoftLightContainers containers;
    containers.allocate();
    containers.allocate();
    std::cout << "Allocated count: " << containers.getAllocatedCount() << "\n";
    containers.release();
    std::cout << "Allocated count after release: " << containers.getAllocatedCount() << "\n";

    arms::SoftLightBehaviourAlgorithms algo;
    for (int i = 0; i < 5; ++i) {
        algo.step();
    }
    std::cout << "Step counter: " << algo.getStepCount() << "\n";

    return 0;
}


