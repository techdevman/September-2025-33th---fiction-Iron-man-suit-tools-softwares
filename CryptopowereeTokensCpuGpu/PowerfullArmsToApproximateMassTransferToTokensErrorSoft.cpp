#include "PowerfullArmsToApproximateMassTransferToTokensErrorSoft.h"

namespace arms {

void ErrorPoweredOsHandler::initialize()
{
    initialized_ = true;
}

void ErrorPoweredOsHandler::shutdown()
{
    initialized_ = false;
}

void ErrorPoweredIsosOnSecondArmsStack::mount()
{
    mounted_ = true;
}

void ErrorPoweredIsosOnSecondArmsStack::unmount()
{
    mounted_ = false;
}

void TokensSoftLightContainers::allocate()
{
    ++allocatedCount_;
}

void TokensSoftLightContainers::release()
{
    if (allocatedCount_ > 0u) {
        --allocatedCount_;
    }
}

void SoftLightBehaviourAlgorithms::step()
{
    ++stepCounter_;
}

} // namespace arms


