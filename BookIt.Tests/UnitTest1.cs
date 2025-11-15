namespace BookIt.Tests;

public class UnitTest1
{
    [Fact]
    public void SimpleAdditionTest()
    {
        // Arrange
        var a = 40;
        var b = 2;

        // Act
        var result = a + b;

        // Assert
        Assert.Equal(42, result);
    }
}
