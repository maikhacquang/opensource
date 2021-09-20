using System;
using System.ComponentModel.DataAnnotations;

namespace dotnet.Models
{
    public class Student
    {
        [Key]
        public int Id { get; set; }
        public string Name { get; set; }

        [DataType(DataType.Date)]
        public DateTime ReleaseDate { get; set; }
        public string Gender { get; set; }
    }
}