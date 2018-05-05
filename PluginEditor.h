/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"

//==============================================================================
/**
*/
/* GUI Component */
class DriveDesign : public LookAndFeel_V4
{
    public:
        DriveDesign()
        {
            setColour(Slider::rotarySliderOutlineColourId, Colours::silver);
            setColour(Slider::rotarySliderFillColourId, Colours::deepskyblue);
            setColour(Slider::thumbColourId, Colours::whitesmoke);
        }
};

class RangeDesign : public LookAndFeel_V4
{
    public:
        RangeDesign()
        {
            setColour(Slider::rotarySliderOutlineColourId, Colours::silver);
            setColour(Slider::rotarySliderFillColourId, Colours::deepskyblue);
            setColour(Slider::thumbColourId, Colours::whitesmoke);
        }
};

class BlendDesign : public LookAndFeel_V4
{
    public:
        BlendDesign()
        {
            setColour(Slider::rotarySliderOutlineColourId, Colours::silver);
            setColour(Slider::rotarySliderFillColourId, Colours::deepskyblue);
            setColour(Slider::thumbColourId, Colours::whitesmoke);
        }
};

class VolumeDesign : public LookAndFeel_V4
{
    public:
        VolumeDesign()
        {
            setColour(Slider::rotarySliderOutlineColourId, Colours::silver);
            setColour(Slider::rotarySliderFillColourId, Colours::deepskyblue);
            setColour(Slider::thumbColourId, Colours::whitesmoke);
        }
};


/* Audio Processor Component */
class BitCrusherAudioProcessorEditor  : public AudioProcessorEditor
{
public:
    BitCrusherAudioProcessorEditor (BitCrusherAudioProcessor&);
    ~BitCrusherAudioProcessorEditor();

    //==============================================================================
    void paint (Graphics&) override;
    void resized() override;

private:
    // This reference is provided as a quick way for your editor to
    // access the processor object that created it.
    /* Sliders */
    ScopedPointer<Slider> driveSlider;
    ScopedPointer<Slider> rangeSlider;
    ScopedPointer<Slider> blendSlider;
    ScopedPointer<Slider> volSlider;
    
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> driveAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> rangeAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> blendAttachment;
    ScopedPointer<AudioProcessorValueTreeState::SliderAttachment> volAttachment;

    /* GUI Components */
    DriveDesign paintDrive;
    RangeDesign paintRange;
    BlendDesign paintBlend;
    VolumeDesign paintVolume;
    
    BitCrusherAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (BitCrusherAudioProcessorEditor)
};
