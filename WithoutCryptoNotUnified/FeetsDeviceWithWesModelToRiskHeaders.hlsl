//as we can use more probed at the each feet
//of the suit, we can permit pribes to detect models.
//so, as the roughness term is still confusing, it is betteer
/)to check albedo models on the other hand  it leans
//we deal with two model. i need to use heat transfer now 

// Minimal pixel shader to ensure valid HLSL in this file
struct VSOut {
    float4 position : SV_Position;
    float2 uv : TEXCOORD0;
};

cbuffer FeetParams : register(b0)
{
    float roughness;
    float albedo;
}

float4 PSMain(VSOut input) : SV_Target
{
    float g = saturate(0.5 * albedo + 0.5 * (1.0 - roughness));
    return float4(g, g, g, 1.0);
}