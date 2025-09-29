#ifndef CRYPTOPOWEREE_TOKENS_CPU_GPU_DDRRAM_ENABLE_STATIONARY_CHEST_H
#define CRYPTOPOWEREE_TOKENS_CPU_GPU_DDRRAM_ENABLE_STATIONARY_CHEST_H

//we must use cintainers 


//there is a way to corrupt iso datas.
//but as containers in ram are flushed, we can prevent maintaining hd.
//so once again, we need stackd. thr', this id a perfect behaviour
//for stationnary ghedt.




//as stacks mustnt directly communicate with gpus, and ad gpus architectue could be old,
//we gan send signals to hd. this is corrupted.
//to prevent it, letd use more isos. then isos must be created by gpus.

namespace chest {

class DdrRamStationaryChest {
public:
  void enable();
  void disable();
};

} // namespace chest

#endif // CRYPTOPOWEREE_TOKENS_CPU_GPU_DDRRAM_ENABLE_STATIONARY_CHEST_H
