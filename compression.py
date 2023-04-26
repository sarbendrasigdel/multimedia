# Open the image file
import PIL
from PIL import Image


image = Image.open('./photo.jpeg')

# Compress the image
image.save('compressed_photo.jpeg', quality=15)
