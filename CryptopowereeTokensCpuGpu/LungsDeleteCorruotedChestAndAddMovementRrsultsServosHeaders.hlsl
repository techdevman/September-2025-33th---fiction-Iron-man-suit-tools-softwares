//to prevent chedt datas corrupted, we need 
//some simple command lines. zs this id a model output value corrections.
//the best here is to start with energy terms. thie id also the behaviour
//of champo2 project.



//programs running on gpu must
//be handled by modern gpu architecture for only tokens.
//so we can handled direct power supply here.

// Minimal HLSL compute shader entry to make file valid
// Thread group size kept small for old GPU architectures
[numthreads(8, 8, 1)]
void CSMain(uint3 dispatchThreadId : SV_DispatchThreadID)
{
    // simple placeholder: compute a trivial value for diagnostics
}