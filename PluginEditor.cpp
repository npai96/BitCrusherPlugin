/*
  ==============================================================================

    This file was auto-generated!

    It contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"

//==============================================================================
BitCrusherAudioProcessorEditor::BitCrusherAudioProcessorEditor (BitCrusherAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    addAndMakeVisible(driveSlider = new Slider("Drive"));
    driveSlider->setSliderStyle(Slider::Rotary);
    driveSlider->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    addAndMakeVisible(rangeSlider = new Slider("Range"));
    rangeSlider->setSliderStyle(Slider::Rotary);
    rangeSlider->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    addAndMakeVisible(blendSlider = new Slider("Blend"));
    blendSlider->setSliderStyle(Slider::Rotary);
    blendSlider->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    addAndMakeVisible(volSlider = new Slider("Volume"));
    volSlider->setSliderStyle(Slider::Rotary);
    volSlider->setTextBoxStyle(Slider::NoTextBox, false, 100, 100);
    
    driveAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "drive", *driveSlider);
    rangeAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "range", *rangeSlider);
    blendAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "blend", *blendSlider);
    volAttachment = new AudioProcessorValueTreeState::SliderAttachment(p.getState(), "volume", *volSlider);
    
    driveSlider->setLookAndFeel(&paintDrive);
    rangeSlider->setLookAndFeel(&paintRange);
    blendSlider->setLookAndFeel(&paintBlend);
    volSlider->setLookAndFeel(&paintVolume);
    
    // Make sure that before the constructor has finished, you've set the
    // editor's size to whatever you need it to be.
    setSize (500, 200);
}

BitCrusherAudioProcessorEditor::~BitCrusherAudioProcessorEditor()
{
}

//==============================================================================
void BitCrusherAudioProcessorEditor::paint (Graphics& g)
{
    g.fillAll(Colours::black);
    g.setColour (Colours::hotpink);
    Font AmpFont("Synchro LET", "regular", 30.0f);
    g.setFont (AmpFont);
    g.drawFittedText ("BitCrusher", getLocalBounds(), Justification::centredTop, 1);
    
    g.drawText("Drive", (((getWidth() / 5) * 1) - (100 / 2)), (getHeight() / 2) + 5, 100, 100, Justification::centred);
    g.drawText("Range", (((getWidth() / 5) * 2) - (100 / 2)), (getHeight() / 2) + 5, 100, 100, Justification::centred);
    g.drawText("Blend", (((getWidth() / 5) * 3) - (100 / 2)), (getHeight() / 2) + 5, 100, 100, Justification::centred);
    g.drawText("Volume", (((getWidth() / 5) * 4) - (100 / 2)), (getHeight() / 2) + 5, 100, 100, Justification::centred);
}

void BitCrusherAudioProcessorEditor::resized()
{
    driveSlider->setBounds((((getWidth() / 5) * 1) - (100 / 2)), (getHeight() / 2) - (100 / 2), 100, 100);
    rangeSlider->setBounds((((getWidth() / 5) * 2) - (100 / 2)), (getHeight() / 2) - (100 / 2), 100, 100);
    blendSlider->setBounds((((getWidth() / 5) * 3) - (100 / 2)), (getHeight() / 2) - (100 / 2), 100, 100);
    volSlider->setBounds((((getWidth() / 5) * 4) - (100 / 2)), (getHeight() / 2) - (100 / 2), 100, 100);
}
