using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DistanceScaleSlider : MonoBehaviour
{
    public SolarSystemSimulation solarSystemSimulation;
    public Slider distanceScaleSlider;

    private void Start()
    {
        distanceScaleSlider.maxValue = 10f;
        distanceScaleSlider.onValueChanged.AddListener(UpdateSimulationDistanceScale);
    }

    private void UpdateSimulationDistanceScale(float value)
    {
        solarSystemSimulation.UpdateDistanceScale(value);
    }
}
