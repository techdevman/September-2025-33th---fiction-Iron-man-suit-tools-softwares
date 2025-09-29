#include "ListOfSignalsErrorUiUX.h"

namespace biosai {

void LightVirtualMachineInBiosForContract::bootOsFromBiosAiWithSyncGpus()
{
    booted_ = true;
}

void LightVirtualMachineInBiosForContract::addOsToBootWithOneSignal()
{
    ++osCount_;
}

bool LightVirtualMachineInBiosForContract::isBooted() const
{
    return booted_;
}

unsigned int LightVirtualMachineInBiosForContract::getOsCount() const
{
    return osCount_;
}

void LightVirtualMachineInBiosForContract::reset()
{
    booted_ = false;
    osCount_ = 0u;
}

} // namespace biosai


