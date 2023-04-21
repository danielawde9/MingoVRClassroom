using UnityEngine;
using OVR;

public class OVRMoveController : MonoBehaviour
{
    public float rotationSpeed = 50.0f;
    public float movementSpeed = 1.0f;
    public float altitudeSpeed = 1.0f;

    private void Update()
    {
        // Read input from both thumbsticks
        Vector2 leftThumbstick = OVRInput.Get(OVRInput.Axis2D.PrimaryThumbstick);
        Vector2 rightThumbstick = OVRInput.Get(OVRInput.Axis2D.SecondaryThumbstick);

        // Get input from A and B buttons
        bool buttonA = OVRInput.Get(OVRInput.Button.One);
        bool buttonB = OVRInput.Get(OVRInput.Button.Two);

        // Rotate using the left thumbstick
        transform.Rotate(Vector3.up, leftThumbstick.x * rotationSpeed * Time.deltaTime, Space.World);
        transform.Rotate(Vector3.right, -leftThumbstick.y * rotationSpeed * Time.deltaTime, Space.Self);

        // Move using the right thumbstick
        Vector3 movement = new Vector3(rightThumbstick.x, 0, rightThumbstick.y) * movementSpeed * Time.deltaTime;

        transform.position += transform.TransformDirection(movement);

        // Change altitude using A and B buttons
        if (buttonA)
        {
            transform.position += Vector3.up * altitudeSpeed * Time.deltaTime;
        }
        if (buttonB)
        {
            transform.position -= Vector3.up * altitudeSpeed * Time.deltaTime;
        }
    }
}
