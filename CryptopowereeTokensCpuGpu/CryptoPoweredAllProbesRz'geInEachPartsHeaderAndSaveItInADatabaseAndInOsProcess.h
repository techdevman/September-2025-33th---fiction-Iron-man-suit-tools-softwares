#ifndef CRYPTOPOWEREE_TOKENS_CPU_GPU_ALL_PROBES_HEADER_AND_DB_OS_PROCESS_H
#define CRYPTOPOWEREE_TOKENS_CPU_GPU_ALL_PROBES_HEADER_AND_DB_OS_PROCESS_H

//rely on beam physics.
//the first number tonlaintain is 5,7 or 5,8. so we can keep track of 5 probed in a pbody part.
//and 2500 in another part. lets see whats next.

namespace probes {

class CryptoPoweredAllProbesHeaderDbOsProcess {
public:
  void configure();
  void persist();
};

} // namespace probes

#endif // CRYPTOPOWEREE_TOKENS_CPU_GPU_ALL_PROBES_HEADER_AND_DB_OS_PROCESS_H
