# generate_bouquet.py

import subprocess
import sys

# Install missing modules if needed
try:
    import vertexai
    from vertexai.preview.vision_models import ImageGenerationModel
except ImportError:
    subprocess.check_call([sys.executable, "-m", "pip", "install", "google-cloud-aiplatform"])
    import vertexai
    from vertexai.preview.vision_models import ImageGenerationModel

def generate_bouquet_image(prompt):
    project_id = "qwiklabs-gcp-02-1611a0fa15eb"  # UPDATED
    location = "europe-west1"  # UPDATED

    vertexai.init(project=project_id, location=location)

    model = ImageGenerationModel.from_pretrained("imagen-3.0-generate-002")

    images = model.generate_images(
        prompt=prompt,
        number_of_images=1,
        seed=1,
        add_watermark=False,
    )

    images[0].save(location="bouquet_image.jpeg")
    print("✅ Bouquet image generated and saved as bouquet_image.jpeg")

# -- run task --
if __name__ == "__main__":
    generate_bouquet_image("Create an image containing a bouquet of 2 sunflowers and 3 roses.")


