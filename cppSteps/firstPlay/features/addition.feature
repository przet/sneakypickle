# A remake of the addition.feature on Cuke4Nuke GitHub
Feature: Addition
    I want to be able to get the result of the sum of two numbers

Scenario Outline: Add two numbers
                Given I have entered <input_1> (into the calculator)
                And I have entered <input_2>
                When I press <button>
                Then the result should be <output>, displayed on the screen
