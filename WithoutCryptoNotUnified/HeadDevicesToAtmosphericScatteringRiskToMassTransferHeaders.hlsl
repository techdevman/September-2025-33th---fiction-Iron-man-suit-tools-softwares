//firet of all, letd see my graphic engine september 2025
//then see neiji93 graphic engine beyond ...
//it seems the headers here cannot use approximate algorithms or models.
//and we cannot linkntheo to high voltage OSs.
//so lets use signals ui/ux znd stacks on hds because
//we dont deal with tokens in this repository.
//that said, it means that the gpu architectures could be old because
//gpu caches are small and those devices here dont need several probes.
//remelber that some other devices use 10^5 eV systems. then limiting probes in the body
//can be good.

//enabling roughness is a risk because in the neiji93 repositories
,several assumptions were made for it.
  //then here gram is suited for old gpu czches.

void atomosphericScztteringToRoughnessRisks(){}

// Minimal vertex+pixel pair for compatibility
struct VSIn {
    float3 position : POSITION;
    float2 uv : TEXCOORD0;
};

struct VSOutHead {
    float4 position : SV_Position;
    float2 uv : TEXCOORD0;
};

VSOutHead VSMainHead(VSIn input)
{
    VSOutHead o;
    o.position = float4(input.position, 1.0);
    o.uv = input.uv;
    return o;
}

cbuffer HeadParams : register(b0)
{
    float3 color;
    float intensity;
}

float4 PSMainHead(VSOutHead input) : SV_Target
{
    return float4(color * intensity, 1.0);
}