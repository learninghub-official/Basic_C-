# analyze_bouquet.py

import subprocess
import sys

# Install missing modules if needed
try:
    import vertexai
    from vertexai.preview.generative_models import GenerativeModel, Part ,Image
except ImportError:
    subprocess.check_call([sys.executable, "-m", "pip", "install", "google-cloud-aiplatform"])
    import vertexai
    from vertexai.preview.generative_models import GenerativeModel, Part
project_id = "qwiklabs-gcp-02-1611a0fa15eb"  # UPDATED
location = "europe-west1"  # UPDATED

def analyze_bouquet_image(image_path: str) -> str:
    
    vertexai.init(project=project_id, location=location)

    model = GenerativeModel("gemini-2.0-flash-001")

    response = model.generate_content([
        Part.from_text('Generate birthday wishes based in this image'),
        Part.from_image(Image.load_from_file(image_path)),
    ])
    return response.text
print(analyze_bouquet_image('./bouquet_image.jpeg'))
    # Fix for Qwiklabs old SDK version
#     with open(image_path, "rb") as image_file:
#         image_data = image_file.read()

#     image = Part.from_data(
#         mime_type="image/jpeg",
#         data=image_data,
#     )

#     prompt = "Generate birthday wishes based on this bouquet image."

#     responses = model.generate_content(
#         [prompt, image],
#         stream=True,
#     )

#     print("✅ Birthday wishes generated from bouquet image:\n")
#     for response in responses:
#         print(response.text, end="")

# # -- run task --
# if __name__ == "__main__":
#     analyze_bouquet_image("bouquet_image.jpeg")
