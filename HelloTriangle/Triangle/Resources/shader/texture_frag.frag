#version 330 core
out vec4 FragColor;
  
in vec3 ourColor;
in vec2 TexCoord;

uniform sampler2D texture1; // Define texture1 as a uniform sampler2D
uniform sampler2D texture2; // Define texture2 as a uniform sampler2D

void main()
{
  FragColor = mix(texture(texture1, TexCoord), texture(texture2, TexCoord), 0.5);
}